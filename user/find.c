#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fs.h"

void find(char *dir, char *file) {
    char buf[512] = {0}, *p;
    int fd;
    struct dirent de;
    struct stat st;

    if ((fd = open(dir, 0)) < 0) {
        fprintf(2, "find: cannot open %s\n", dir);
        return;
    }
    if (strlen(dir) + 1 + DIRSIZ + 1 > sizeof(buf)) {
        fprintf(2, "find: path too long\n");
        close(fd);
        return;
    }

    strcpy(buf, dir);
    p = buf + strlen(buf);
    *p++ = '/';
    while (read(fd, &de, sizeof(de)) == sizeof(de)) {
        if (de.inum == 0 || strcmp(de.name, ".") == 0 || strcmp(de.name, "..") == 0) {
            continue;
        }
        memmove(p, de.name, DIRSIZ);
        p[DIRSIZ] = 0;
        if (stat(buf, &st) < 0) {
            fprintf(2, "find: cannot stat %s\n", buf);
            continue;
        }
        if (st.type == T_DIR) {
            find(buf, file);
        } else if (strcmp(de.name, file) == 0) {
            printf("%s\n", buf);
        }
    }
    close(fd);
    return;
}

int main(int argc, char *argv[]) {
    struct stat st;

    if (argc != 3) {
        fprintf(2, "Usage: find dir file\n");
        exit(1);
    }
    if (stat(argv[1], &st) < 0) {
        fprintf(2, "find: cannot stat %s\n", argv[1]);
        exit(2);
    }
    if (st.type != T_DIR) {
        fprintf(2, "find: '%s' is not a directory\n", argv[1]);
        exit(3);
    }
    find(argv[1], argv[2]);
    exit(0);
}
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main() {
	int fd1[2], fd2[2];
	char buf[1];
	pipe(fd1);
	pipe(fd2);
	if(fork() == 0){
		close(fd1[1]);
		read(fd1[0],buf,1);
		close(fd1[0]);
		printf("%d: received ping\n",getpid());
		
		close(fd2[0]);
		write(fd2[1],buf,1);
		close(fd2[1]);
	} else {
		close(fd1[0]);
		write(fd1[1],"a",1);
		close(fd1[1]);
		
		close(fd2[1]);
		read(fd2[0],buf,1);
		close(fd2[0]);
		printf("%d: received pong\n", getpid());
	}
	exit(0);
}

# xv6-labs-2020
MIT 6.S081 2020 Labs
## Codes and Blogs
In addition to the master branch, there are 11 code branches, such as util, syscall, pgtbl. The code for each lab is under its corresponding branch.
  
The specific details of the lab code can be found on my blogs, the URLs are as follows(The first blog is about lab environment configuration and code debugging and testing):
* [Lab 0: 实验配置, 调试及测试](https://blog.csdn.net/LostUnravel/article/details/120397168)
* [Lab 1: Xv6 and Unix utilities](https://blog.csdn.net/LostUnravel/article/details/120397205)
* [Lab 2: system calls](https://blog.csdn.net/LostUnravel/article/details/121319645)
* [Lab 3: page tables](https://blog.csdn.net/LostUnravel/article/details/121340933)
* [Lab 4: traps](https://blog.csdn.net/LostUnravel/article/details/121341055)
* [Lab 5: xv6 lazy page allocation](https://blog.csdn.net/LostUnravel/article/details/121418421)
* [Lab 6: Copy-on-Write Fork for xv6](https://blog.csdn.net/LostUnravel/article/details/121418548)
* [Lab 7: Multithreading](https://blog.csdn.net/LostUnravel/article/details/121430791)
* [Lab8: locks](https://blog.csdn.net/LostUnravel/article/details/121430900)
* [Lab 9: file system](https://blog.csdn.net/LostUnravel/article/details/121431163)
* [Lab 10: mmap](https://blog.csdn.net/LostUnravel/article/details/121437327)
* [Lab 11: networking](https://blog.csdn.net/LostUnravel/article/details/121437373)

Welcome to discuss and communicate.

## About xv6
xv6 is a re-implementation of Dennis Ritchie's and Ken Thompson's Unix Version 6 (v6).  xv6 loosely follows the structure and style of v6, but is implemented for a modern RISC-V multiprocessor using ANSI C.

### ACKNOWLEDGMENTS

xv6 is inspired by John Lions's Commentary on UNIX 6th Edition (Peer to Peer Communications; ISBN: 1-57398-013-7; 1st edition (June 14, 2000)). See also [https://pdos.csail.mit.edu/6.828/](https://pdos.csail.mit.edu/6.828/), which provides pointers to on-line resources for v6.

The following people have made contributions: Russ Cox (context switching, locking), Cliff Frey (MP), Xiao Yu (MP), Nickolai Zeldovich, and Austin Clements.

We are also grateful for the bug reports and patches contributed by Silas Boyd-Wickizer, Anton Burtsev, Dan Cross, Cody Cutler, Mike CAT, Tej Chajed, Asami Doi, eyalz800, , Nelson Elhage, Saar Ettinger, Alice Ferrazzi, Nathaniel Filardo, Peter Froehlich, Yakir Goaron,Shivam Handa, Bryan Henry, jaichenhengjie, Jim Huang, Alexander Kapshuk, Anders Kaseorg, kehao95, Wolfgang Keller, Jonathan Kimmitt, Eddie Kohler, Austin Liew, Imbar Marinescu, Yandong Mao, Matan Shabtay, Hitoshi Mitake, Carmi Merimovich, Mark Morrissey, mtasm, Joel Nider, Greg Price, Ayan Shafqat, Eldar Sehayek, Yongming Shen, Fumiya Shigemitsu, Takahiro, Cam Tenny, tyfkda, Rafael Ubal, Warren Toomey, Stephen Tu, Pablo Ventura, Xi Wang, Keiichi Watanabe, Nicolas Wolovick, wxdao, Grant Wu, Jindong Zhang, Icenowy Zheng, and Zou Chang Wei.

The code in the files that constitute xv6 is Copyright 2006-2020 Frans Kaashoek, Robert Morris, and Russ Cox.

### ERROR REPORTS

Please send errors and suggestions to Frans Kaashoek and Robert Morris (kaashoek,rtm@mit.edu). The main purpose of xv6 is as a teaching operating system for MIT's 6.S081, so we are more interested in simplifications and clarifications than new features.

### BUILDING AND RUNNING XV6

You will need a RISC-V "newlib" tool chain from [https://github.com/riscv/riscv-gnu-toolchain](https://github.com/riscv/riscv-gnu-toolchain), and qemu compiled for riscv64-softmmu. Once they are installed, and in your shell search path, you can run "make qemu".
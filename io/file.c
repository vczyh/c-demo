#include <stdio.h>
#include <stdlib.h>
//#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif

int main() {
    int fd = open("/Users/zhangyuheng/code/c-demo/io/1.txt", O_RDONLY);

    if (fd == -1) {
        exit(1);
    }

    ssize_t numRead;
    char buf[BUF_SIZE];

    while ((numRead = read(fd, buf, BUF_SIZE)) > 0) {
        printf("%s", buf);
    }
}

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main(int c, char** v) {
    if (c < 2) return 1;
    int fd = open(v[1], O_WRONLY | O_CREAT, 0666);
    if (fd < 0) return 1;
    close(fd);
    return 0;
}

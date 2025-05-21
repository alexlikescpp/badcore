#include <dirent.h>
#include <cstdio>

int main() {
    DIR* d = opendir(".");
    dirent* e;
    while ((e = readdir(d))) puts(e->d_name);
}


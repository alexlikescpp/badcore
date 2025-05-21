#include <sys/utsname.h>
#include <cstdio>
#include <cstring>

int main(int c, char** v) {
    utsname u;
    if (uname(&u)) return 1;
    if (c > 1 && !strcmp(v[1], "-a"))
        printf("%s %s %s %s %s\n", u.sysname, u.nodename, u.release, u.version, u.machine);
    else
        puts(u.sysname);
}


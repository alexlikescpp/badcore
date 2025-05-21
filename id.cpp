#include <iostream>
#include <unistd.h>
#include <sys/types.h>

int main() {
    std::cout << "uid=" << getuid() << " gid=" << getgid() << "\n";
}

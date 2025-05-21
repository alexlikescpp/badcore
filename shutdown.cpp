#include <iostream>
#include <unistd.h>
#include <sys/reboot.h>

int main() {
    sync();
    if (reboot(RB_POWER_OFF) == -1) {
        perror("Failed to shutdown");
        return 1;
    }
    return 0;
}

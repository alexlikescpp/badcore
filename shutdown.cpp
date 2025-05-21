#include <unistd.h>
#include <sys/reboot.h>
#include <cstring>
int main(int c,char**v){
    int cmd=RB_POWER_OFF;
    if(c>1)
        if(!strcmp(v[1],"halt"))cmd=RB_HALT_SYSTEM;
        else if(!strcmp(v[1],"reboot"))cmd=RB_AUTOBOOT;
    sync();
    reboot(cmd);
}

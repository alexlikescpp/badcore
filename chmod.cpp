#include <sys/stat.h>

int main(int c, char** v) {
    if (c < 3 || std::string(v[1]) != "+x") return 1;
    struct stat st;
    if (stat(v[2], &st)) return 1;
    return chmod(v[2], st.st_mode | S_IXUSR);
}

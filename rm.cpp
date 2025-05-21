#include <cstdio>
int main(int argc, char** argv) {
    if (argc != 2) return 1;
    return std::remove(argv[1]) ? 1 : 0;
}

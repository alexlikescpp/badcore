#include <fstream>
int main(int c, char** v) {
    if (c < 3) return 1;
    std::ofstream(v[2], std::ios::binary) << std::ifstream(v[1], std::ios::binary).rdbuf();
}


#include <fstream>
#include <iostream>

int main(int argc, char** argv) {
    if (argc < 2) return 1;
    std::ifstream f(argv[1]);
    std::cout << f.rdbuf();
}


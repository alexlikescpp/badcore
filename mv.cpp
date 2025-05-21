#include <cstdio>
int main(int c, char** v) {
    return c < 3 ? 1 : std::rename(v[1], v[2]);
}


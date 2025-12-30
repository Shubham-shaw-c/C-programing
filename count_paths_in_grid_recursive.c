#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int paths(int r, int c) {
    if (r == 0 || c == 0) return 1;
    return paths(r - 1, c) + paths(r, c - 1);
}

int main() {
    printf("%d\n", paths(5, 5));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n = 4, i;
    for (i = 0; i < (1 << n); i++) {
        int g = i ^ (i >> 1), b;
        for (b = n - 1; b >= 0; b--) putchar('0' + ((g >> b) & 1));
        putchar(' ');
    }
    putchar('\n');
    return 0;
}

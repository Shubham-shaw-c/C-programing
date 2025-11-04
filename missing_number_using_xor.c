#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {0, 1, 2, 4, 5, 6, 7}, i, x = 0;
    for (i = 0; i < 7; i++) x ^= a[i] ^ i;
    x ^= 7;
    printf("%d\n", x);
    return 0;
}

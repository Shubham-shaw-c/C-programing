#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isBinaryPalindrome(int n) {
    int bits[32], len = 0, i;
    while (n > 0) {
        bits[len++] = n & 1;
        n >>= 1;
    }
    for (i = 0; i < len / 2; i++) {
        if (bits[i] != bits[len - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n = 1, found = 0;
    while (found < 8) {
        if (isBinaryPalindrome(n)) {
            printf("%d ", n);
            found++;
        }
        n++;
    }
    printf("\n");
    return 0;
}

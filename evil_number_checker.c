#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isEvil(int n) {
    int ones = 0;
    while (n > 0) {
        ones += n & 1;
        n >>= 1;
    }
    return ones % 2 == 0;
}

int main() {
    int n = 1, found = 0;
    while (found < 8) {
        if (isEvil(n)) {
            printf("%d ", n);
            found++;
        }
        n++;
    }
    printf("\n");
    return 0;
}

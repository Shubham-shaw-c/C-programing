#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isKaprekar(int n) {
    long long sq = (long long)n * n, p;
    long long left, right;
    if (n == 1) {
        return 1;
    }
    for (p = 10; p <= sq; p *= 10) {
        left = sq / p;
        right = sq % p;
        if (right > 0 && left + right == n) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int i, count = 0;
    for (i = 1; i <= 500; i++) {
        count += isKaprekar(i) ? 1 : 0;
    }
    printf("Total in 1..500: %d\n", count);
    return 0;
}

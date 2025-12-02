#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isAutomorphic(int n) {
    long long sq = (long long)n * n;
    while (n > 0) {
        if (n % 10 != sq % 10) {
            return 0;
        }
        n /= 10;
        sq /= 10;
    }
    return 1;
}

int main() {
    int n = 1, found = 0;
    while (found < 8) {
        if (isAutomorphic(n)) {
            printf("%d ", n);
            found++;
        }
        n++;
    }
    printf("\n");
    return 0;
}

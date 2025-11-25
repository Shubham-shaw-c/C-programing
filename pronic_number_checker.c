#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPronic(int n) {
    int k;
    for (k = 0; k * (k + 1) <= n; k++) {
        if (k * (k + 1) == n) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int i, last = 0, sum = 0;
    for (i = 1; i <= 300; i++) {
        if (isPronic(i)) {
            sum += i;
            last = i;
        }
    }
    printf("sum=%d last=%d\n", sum, last);
    return 0;
}

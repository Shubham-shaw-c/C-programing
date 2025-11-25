#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isAbundant(int n) {
    int i, sum = 0;
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum > n;
}

int main() {
    int i, printed = 0;
    for (i = 300; i >= 1 && printed < 6; i--) {
        if (isAbundant(i)) {
            printf("%d ", i);
            printed++;
        }
    }
    printf("\n");
    return 0;
}

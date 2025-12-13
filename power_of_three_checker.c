#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPowerOfThree(int n) {
    if (n < 1) {
        return 0;
    }
    while (n % 3 == 0) {
        n /= 3;
    }
    return n == 1;
}

int main() {
    int i, printed = 0;
    for (i = 300; i >= 1 && printed < 6; i--) {
        if (isPowerOfThree(i)) {
            printf("%d ", i);
            printed++;
        }
    }
    printf("\n");
    return 0;
}

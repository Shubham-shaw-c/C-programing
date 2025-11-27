#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isSumOfTwoSquares(int n) {
    int a, b;
    for (a = 0; a * a <= n; a++) {
        for (b = a; a * a + b * b <= n; b++) {
            if (a * a + b * b == n) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int i, printed = 0;
    for (i = 300; i >= 1 && printed < 6; i--) {
        if (isSumOfTwoSquares(i)) {
            printf("%d ", i);
            printed++;
        }
    }
    printf("\n");
    return 0;
}

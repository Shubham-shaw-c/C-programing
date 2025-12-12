#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPerfectSquare(int n) {
    int r = 0;
    while (r * r < n) {
        r++;
    }
    return r * r == n;
}

int main() {
    int i, printed = 0;
    for (i = 300; i >= 1 && printed < 6; i--) {
        if (isPerfectSquare(i)) {
            printf("%d ", i);
            printed++;
        }
    }
    printf("\n");
    return 0;
}

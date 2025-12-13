#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isSquareFree(int n) {
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % (i * i) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int i, printed = 0;
    for (i = 300; i >= 1 && printed < 6; i--) {
        if (isSquareFree(i)) {
            printf("%d ", i);
            printed++;
        }
    }
    printf("\n");
    return 0;
}

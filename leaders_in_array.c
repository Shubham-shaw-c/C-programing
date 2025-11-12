#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {16, 17, 4, 3, 5, 2}, n = 6, i, maxRight = -1;
    int out[6], k = 0;
    for (i = n - 1; i >= 0; i--) {
        if (a[i] > maxRight) {
            maxRight = a[i];
            out[k++] = a[i];
        }
    }
    while (k--) printf("%d ", out[k]);
    printf("\n");
    return 0;
}

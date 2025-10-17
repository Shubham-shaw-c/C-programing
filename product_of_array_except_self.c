#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 2, 3, 4, 5}, n = 5, out[5], i, right = 1;
    out[0] = 1;
    for (i = 1; i < n; i++) out[i] = out[i - 1] * a[i - 1];
    for (i = n - 1; i >= 0; i--) {
        out[i] *= right;
        right *= a[i];
    }
    for (i = 0; i < n; i++) printf("%d ", out[i]);
    printf("\n");
    return 0;
}

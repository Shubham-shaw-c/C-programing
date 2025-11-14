#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 2, 3, -4, -1, -6}, n = 6, out[6], p = 0, q = 1, i;
    for (i = 0; i < n; i++) {
        if (a[i] >= 0) {
            out[p] = a[i];
            p += 2;
        } else {
            out[q] = a[i];
            q += 2;
        }
    }
    for (i = 0; i < n; i++) printf("%d ", out[i]);
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 2, 3, 4, 101, 102, 103, 104}, n = 8, out[8], i;
    for (i = 0; i < n / 2; i++) {
        out[2 * i] = a[i];
        out[2 * i + 1] = a[i + n / 2];
    }
    for (i = 0; i < n; i++) printf("%d ", out[i]);
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 1, 2, 2, 2, 3, 4, 4, 5}, n = 9, i, k = 1;
    for (i = 1; i < n; i++) {
        if (a[i] != a[k - 1]) {
            a[k++] = a[i];
        }
    }
    for (i = 0; i < k; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

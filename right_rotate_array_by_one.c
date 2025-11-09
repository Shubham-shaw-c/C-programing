#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {10, 20, 30, 40, 50}, n = 5, i, last = a[n - 1];
    for (i = n - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = last;
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

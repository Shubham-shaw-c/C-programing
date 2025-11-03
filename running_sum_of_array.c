#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {3, 1, 2, 10, 1}, n = 5, i;
    for (i = 1; i < n; i++) a[i] += a[i - 1];
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

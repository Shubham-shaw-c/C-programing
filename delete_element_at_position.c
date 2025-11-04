#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {10, 20, 30, 40, 50}, n = 5, pos = 1, i;
    for (i = pos; i < n - 1; i++) a[i] = a[i + 1];
    n--;
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {0, 1, 0, 3, 12, 0, 5}, n = 7, i, pos = 0;
    for (i = 0; i < n; i++) {
        if (a[i] != 0) a[pos++] = a[i];
    }
    while (pos < n) a[pos++] = 0;
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

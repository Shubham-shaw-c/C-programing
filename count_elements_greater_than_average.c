#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {4, 8, 15, 16, 23, 42}, n = 6, i, sum = 0, count = 0;
    for (i = 0; i < n; i++) sum += a[i];
    for (i = 0; i < n; i++) {
        if (a[i] * n > sum) count++;
    }
    printf("%d\n", count);
    return 0;
}

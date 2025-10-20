#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int a[] = {30, 5, 20, 9, 14, 11}, n = 6, i, best = 1 << 30;
    qsort(a, n, sizeof(int), cmp);
    for (i = 1; i < n; i++) {
        if (a[i] - a[i - 1] < best) best = a[i] - a[i - 1];
    }
    printf("%d\n", best);
    return 0;
}

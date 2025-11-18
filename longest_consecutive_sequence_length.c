#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int a[] = {100, 4, 200, 1, 3, 2, 101, 102, 103}, n = 9, i, run = 1, best = 1;
    qsort(a, n, sizeof(int), cmp);
    for (i = 1; i < n; i++) {
        if (a[i] == a[i - 1] + 1) run++;
        else if (a[i] != a[i - 1]) run = 1;
        if (run > best) best = run;
    }
    printf("%d\n", best);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int a[] = {5, 20, 3, 2, 50, 80}, n = 6, diff = 78, i = 0, j = 1;
    qsort(a, n, sizeof(int), cmp);
    while (j < n && i < n) {
        int d = a[j] - a[i];
        if (i != j && d == diff) {
            printf("%d %d\n", a[i], a[j]);
            return 0;
        }
        if (d < diff) j++;
        else i++;
    }
    printf("none\n");
    return 0;
}

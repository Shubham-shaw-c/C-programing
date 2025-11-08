#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int a[] = {7, 1, 9, 4, 3, 8}, n = 6;
    qsort(a, n, sizeof(int), cmp);
    double med = n % 2 ? a[n / 2] : (a[n / 2 - 1] + a[n / 2]) / 2.0;
    printf("%.1f\n", med);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *x, const void *y) {
    return *(int *)x - *(int *)y;
}

int main() {
    int a[] = {-1, 0, 1, 2, -1, -4}, n = 6, i;
    qsort(a, n, sizeof(int), cmp);
    for (i = 0; i < n - 2; i++) {
        int l = i + 1, r = n - 1;
        if (i > 0 && a[i] == a[i - 1]) continue;
        while (l < r) {
            int s = a[i] + a[l] + a[r];
            if (s == 0) {
                printf("(%d,%d,%d) ", a[i], a[l], a[r]);
                l++;
                r--;
                while (l < r && a[l] == a[l - 1]) l++;
            } else if (s < 0) {
                l++;
            } else {
                r--;
            }
        }
    }
    printf("\n");
    return 0;
}

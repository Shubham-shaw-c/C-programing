#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {2, 0, 1, 2, 1, 0, 0, 2, 1}, n = 9, lo = 0, mid = 0, hi = n - 1, i, t;
    while (mid <= hi) {
        if (a[mid] == 0) {
            t = a[lo]; a[lo++] = a[mid]; a[mid++] = t;
        } else if (a[mid] == 1) {
            mid++;
        } else {
            t = a[mid]; a[mid] = a[hi]; a[hi--] = t;
        }
    }
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev(int a[], int l, int r) {
    while (l < r) {
        int t = a[l];
        a[l++] = a[r];
        a[r--] = t;
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7}, n = 7, k = 3, i;
    rev(a, 0, k - 1);
    rev(a, k, n - 1);
    rev(a, 0, n - 1);
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

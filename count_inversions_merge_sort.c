#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long merge(int a[], int tmp[], int l, int m, int r) {
    int i = l, j = m + 1, k = l;
    long long inv = 0;
    while (i <= m && j <= r) {
        if (a[i] <= a[j]) {
            tmp[k++] = a[i++];
        } else {
            tmp[k++] = a[j++];
            inv += m - i + 1;
        }
    }
    while (i <= m) tmp[k++] = a[i++];
    while (j <= r) tmp[k++] = a[j++];
    for (i = l; i <= r; i++) a[i] = tmp[i];
    return inv;
}

long long sortCount(int a[], int tmp[], int l, int r) {
    long long inv = 0;
    if (l < r) {
        int m = (l + r) / 2;
        inv += sortCount(a, tmp, l, m);
        inv += sortCount(a, tmp, m + 1, r);
        inv += merge(a, tmp, l, m, r);
    }
    return inv;
}

int main() {
    int a[] = {8, 4, 2, 1, 7, 3}, tmp[6];
    printf("%lld\n", sortCount(a, tmp, 0, 5));
    return 0;
}

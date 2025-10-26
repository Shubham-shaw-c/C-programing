#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {-7, -3, 2, 3, 11}, n = 5, out[5], l = 0, r = 4, k = 4, i;
    while (l <= r) {
        if (a[l] * a[l] > a[r] * a[r]) {
            out[k--] = a[l] * a[l];
            l++;
        } else {
            out[k--] = a[r] * a[r];
            r--;
        }
    }
    for (i = 0; i < n; i++) printf("%d ", out[i]);
    printf("\n");
    return 0;
}

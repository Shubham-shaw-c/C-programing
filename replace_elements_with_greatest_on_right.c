#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {17, 18, 5, 4, 6, 1}, n = 6, i, mx = -1;
    for (i = n - 1; i >= 0; i--) {
        int cur = a[i];
        a[i] = mx;
        if (cur > mx) mx = cur;
    }
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

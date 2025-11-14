#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {2, 3, -2, 4, -1}, n = 5, i;
    int mx = a[0], mn = a[0], best = a[0];
    for (i = 1; i < n; i++) {
        int x = mx * a[i], y = mn * a[i];
        mx = a[i];
        if (x > mx) mx = x;
        if (y > mx) mx = y;
        mn = a[i];
        if (x < mn) mn = x;
        if (y < mn) mn = y;
        if (mx > best) best = mx;
    }
    printf("%d\n", best);
    return 0;
}

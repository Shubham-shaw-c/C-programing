#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {8, -8, 9, -9, 10, -11, 12}, n = 7, i;
    int total = 0, curMax = 0, curMin = 0, best = a[0], worst = a[0];
    for (i = 0; i < n; i++) {
        total += a[i];
        curMax = curMax > 0 ? curMax + a[i] : a[i];
        curMin = curMin < 0 ? curMin + a[i] : a[i];
        if (curMax > best) best = curMax;
        if (curMin < worst) worst = curMin;
    }
    printf("%d\n", best > 0 && total - worst > best ? total - worst : best);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {2, 3, 10, 6, 4, 8, 1}, n = 7, i, lo = a[0], best = a[1] - a[0];
    for (i = 1; i < n; i++) {
        if (a[i] - lo > best) best = a[i] - lo;
        if (a[i] < lo) lo = a[i];
    }
    printf("%d\n", best);
    return 0;
}

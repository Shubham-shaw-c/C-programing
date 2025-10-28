#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 9, 3, 15, 2, 8}, n = 6, i, best = 0;
    for (i = 1; i < n; i++) {
        int d = a[i] > a[i - 1] ? a[i] - a[i - 1] : a[i - 1] - a[i];
        if (d > best) best = d;
    }
    printf("%d\n", best);
    return 0;
}

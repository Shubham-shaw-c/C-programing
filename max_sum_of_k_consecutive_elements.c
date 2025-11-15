#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}, n = 9, k = 4, i, win = 0, best;
    for (i = 0; i < k; i++) win += a[i];
    best = win;
    for (i = k; i < n; i++) {
        win += a[i] - a[i - k];
        if (win > best) best = win;
    }
    printf("%d\n", best);
    return 0;
}

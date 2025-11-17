#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4}, n = 9, i;
    int best = a[0], cur = a[0];
    for (i = 1; i < n; i++) {
        cur = cur + a[i] > a[i] ? cur + a[i] : a[i];
        if (cur > best) best = cur;
    }
    printf("%d\n", best);
    return 0;
}

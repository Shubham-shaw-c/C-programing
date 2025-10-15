#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4}, n = 9, i;
    int best = a[0], cur = a[0], s = 0, bs = 0, be = 0;
    for (i = 1; i < n; i++) {
        if (cur < 0) {
            cur = a[i];
            s = i;
        } else {
            cur += a[i];
        }
        if (cur > best) {
            best = cur;
            bs = s;
            be = i;
        }
    }
    printf("%d from %d to %d\n", best, bs, be);
    return 0;
}

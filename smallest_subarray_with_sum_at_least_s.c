#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 4, 45, 6, 0, 19}, n = 6, s = 51, l = 0, i, sum = 0, best = n + 1;
    for (i = 0; i < n; i++) {
        sum += a[i];
        while (sum >= s) {
            if (i - l + 1 < best) best = i - l + 1;
            sum -= a[l++];
        }
    }
    printf("%d\n", best == n + 1 ? 0 : best);
    return 0;
}

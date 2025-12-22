#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[] = {3, 4, 5, -3, 100, 1, 89, 54, 23, 20}, n = 10, total, best = 1 << 30;

void go(int i, int cnt, int sum) {
    int diff;
    if (i == n) {
        if (cnt == n / 2) {
            diff = abs(total - 2 * sum);
            if (diff < best) best = diff;
        }
        return;
    }
    go(i + 1, cnt + 1, sum + a[i]);
    go(i + 1, cnt, sum);
}

int main() {
    int i;
    for (i = 0; i < n; i++) total += a[i];
    go(0, 0, 0);
    printf("%d\n", best);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[] = {4, 3, 2, 3, 5, 2, 1}, used[7], target = 5;

int go(int k, int sum, int start) {
    int i;
    if (k == 0) return 1;
    if (sum == target) return go(k - 1, 0, 0);
    for (i = start; i < 7; i++) {
        if (!used[i] && sum + a[i] <= target) {
            used[i] = 1;
            if (go(k, sum + a[i], i + 1)) return 1;
            used[i] = 0;
        }
    }
    return 0;
}

int main() {
    printf(go(4, 0, 0) ? "possible\n" : "impossible\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int h[] = {1, 8, 6, 2, 5, 4, 8, 3, 7}, l = 0, r = 8, best = 0;
    while (l < r) {
        int w = r - l, ht = h[l] < h[r] ? h[l] : h[r];
        if (w * ht > best) best = w * ht;
        if (h[l] < h[r]) l++;
        else r--;
    }
    printf("%d\n", best);
    return 0;
}

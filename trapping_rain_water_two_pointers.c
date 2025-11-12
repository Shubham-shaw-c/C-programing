#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int h[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}, n = 12;
    int l = 0, r = n - 1, lm = 0, rm = 0, water = 0;
    while (l < r) {
        if (h[l] < h[r]) {
            if (h[l] >= lm) lm = h[l];
            else water += lm - h[l];
            l++;
        } else {
            if (h[r] >= rm) rm = h[r];
            else water += rm - h[r];
            r--;
        }
    }
    printf("%d\n", water);
    return 0;
}

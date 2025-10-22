#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {2, 1, 4, 7, 3, 2, 5, 6, 8, 2}, n = 10, i = 1, best = 0;
    while (i < n - 1) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            int l = i, r = i;
            while (l > 0 && a[l] > a[l - 1]) l--;
            while (r < n - 1 && a[r] > a[r + 1]) r++;
            if (r - l + 1 > best) best = r - l + 1;
            i = r;
        } else {
            i++;
        }
    }
    printf("%d\n", best);
    return 0;
}

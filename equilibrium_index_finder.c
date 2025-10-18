#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {-7, 1, 5, 2, -4, 3, 0}, n = 7, i, total = 0, left = 0;
    for (i = 0; i < n; i++) total += a[i];
    for (i = 0; i < n; i++) {
        total -= a[i];
        if (left == total) {
            printf("%d\n", i);
            break;
        }
        left += a[i];
    }
    return 0;
}

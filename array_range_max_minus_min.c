#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {14, -3, 27, 8, -11, 19}, n = 6, i, lo = a[0], hi = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] < lo) lo = a[i];
        if (a[i] > hi) hi = a[i];
    }
    printf("%d\n", hi - lo);
    return 0;
}

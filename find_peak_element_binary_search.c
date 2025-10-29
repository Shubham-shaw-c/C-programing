#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 3, 8, 12, 4, 2}, lo = 0, hi = 5;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if (a[mid] < a[mid + 1]) lo = mid + 1;
        else hi = mid;
    }
    printf("%d at %d\n", a[lo], lo);
    return 0;
}

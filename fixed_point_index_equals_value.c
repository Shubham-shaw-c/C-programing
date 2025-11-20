#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {-10, -5, 0, 3, 7, 9}, lo = 0, hi = 5;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (a[mid] == mid) {
            printf("%d\n", mid);
            return 0;
        }
        if (a[mid] > mid) hi = mid - 1;
        else lo = mid + 1;
    }
    printf("-1\n");
    return 0;
}

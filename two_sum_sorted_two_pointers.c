#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 3, 4, 6, 8, 11, 15}, n = 7, target = 14;
    int l = 0, r = n - 1;
    while (l < r) {
        int s = a[l] + a[r];
        if (s == target) {
            printf("%d %d\n", a[l], a[r]);
            return 0;
        }
        if (s < target) l++;
        else r--;
    }
    printf("no pair\n");
    return 0;
}

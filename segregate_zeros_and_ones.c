#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 0, 1, 1, 0, 0, 1, 0}, l = 0, r = 7, i;
    while (l < r) {
        while (l < r && a[l] == 0) l++;
        while (l < r && a[r] == 1) r--;
        if (l < r) {
            int t = a[l];
            a[l] = a[r];
            a[r] = t;
        }
    }
    for (i = 0; i < 8; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

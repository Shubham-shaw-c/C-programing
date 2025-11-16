#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {9, 4, 9, 6, 7, 4}, n = 6, i, j;
    for (i = 0; i < n; i++) {
        int dup = 0;
        for (j = 0; j < n; j++) {
            if (i != j && a[i] == a[j]) {
                dup = 1;
                break;
            }
        }
        if (!dup) {
            printf("%d\n", a[i]);
            return 0;
        }
    }
    printf("none\n");
    return 0;
}

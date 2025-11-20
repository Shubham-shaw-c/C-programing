#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 4, 7, 10}, b[] = {2, 3, 8, 11, 15}, c[9];
    int i = 0, j = 0, k = 0;
    while (i < 4 && j < 5) {
        c[k++] = a[i] <= b[j] ? a[i++] : b[j++];
    }
    while (i < 4) c[k++] = a[i++];
    while (j < 5) c[k++] = b[j++];
    for (i = 0; i < 9; i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}

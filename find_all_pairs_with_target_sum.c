#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 5, 7, -1, 5}, n = 5, target = 6, i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) printf("(%d,%d) ", a[i], a[j]);
        }
    }
    printf("\n");
    return 0;
}

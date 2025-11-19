#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 2, 3, -3, 1, 1, 1, 4}, n = 8, k = 3, i, j, count = 0;
    for (i = 0; i < n; i++) {
        int sum = 0;
        for (j = i; j < n; j++) {
            sum += a[j];
            if (sum == k) count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {2, 4, 1, 3, 5, 7}, n = 6, k = 3, i, j, count = 0;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if ((a[i] + a[j]) % k == 0) count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

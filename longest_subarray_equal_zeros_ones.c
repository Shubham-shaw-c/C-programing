#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 0, 0, 1, 0, 1, 1}, n = 7, i, j, best = 0;
    for (i = 0; i < n; i++) {
        int bal = 0;
        for (j = i; j < n; j++) {
            bal += a[j] ? 1 : -1;
            if (bal == 0 && j - i + 1 > best) best = j - i + 1;
        }
    }
    printf("%d\n", best);
    return 0;
}

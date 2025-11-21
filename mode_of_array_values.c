#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {3, 5, 3, 7, 5, 3, 9, 5, 3}, n = 9, i, j, best = 0, mode = a[0];
    for (i = 0; i < n; i++) {
        int c = 0;
        for (j = 0; j < n; j++) c += a[i] == a[j];
        if (c > best) {
            best = c;
            mode = a[i];
        }
    }
    printf("%d occurs %d times\n", mode, best);
    return 0;
}

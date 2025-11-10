#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {3, 8, 12, 7, 5, 6, 10}, n = 7, i, even = 0, odd = 0;
    for (i = 0; i < n; i++) {
        if (a[i] & 1) odd++;
        else even++;
    }
    printf("even=%d odd=%d\n", even, odd);
    return 0;
}

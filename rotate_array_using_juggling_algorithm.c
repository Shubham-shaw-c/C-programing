#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}, n = 12, d = 3, i, j, k, t;
    int g = gcd(n, d);
    for (i = 0; i < g; i++) {
        t = a[i];
        j = i;
        while (1) {
            k = (j + d) % n;
            if (k == i) break;
            a[j] = a[k];
            j = k;
        }
        a[j] = t;
    }
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

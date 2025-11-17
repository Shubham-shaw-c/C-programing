#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 2, 3, 4}, n = 4, i;
    long long total = 0;
    for (i = 0; i < n; i++) total += (long long)a[i] * (i + 1) * (n - i);
    printf("%lld\n", total);
    return 0;
}

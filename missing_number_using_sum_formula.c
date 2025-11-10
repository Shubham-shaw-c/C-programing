#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 2, 4, 5, 6, 7, 9, 10}, n = 10, i;
    int expected = n * (n + 1) / 2, actual = 0;
    for (i = 0; i < 8; i++) actual += a[i];
    printf("%d\n", expected - actual);
    return 0;
}

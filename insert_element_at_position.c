#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[10] = {10, 20, 30, 40, 50}, n = 5, pos = 2, val = 99, i;
    for (i = n; i > pos; i--) a[i] = a[i - 1];
    a[pos] = val;
    n++;
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

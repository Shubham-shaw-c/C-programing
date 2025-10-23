#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {5, 10, 15, 20, 26}, n = 5, i;
    int sum = 0;
    for (i = 0; i < n; i++) sum += a[i];
    printf("sum=%d avg=%.2f\n", sum, (double)sum / n);
    return 0;
}

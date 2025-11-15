#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {14, 7, 93, 28, 55, 61};
    int n = sizeof(a) / sizeof(a[0]), i, max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("%d\n", max);
    return 0;
}

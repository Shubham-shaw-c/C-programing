#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 4, 7, 4, 1}, n = 5, i;
    for (i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    return 0;
}

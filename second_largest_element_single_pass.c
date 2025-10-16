#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {12, 35, 1, 10, 34, 1};
    int n = 6, i, first = -1, second = -1;
    for (i = 0; i < n; i++) {
        if (a[i] > first) {
            second = first;
            first = a[i];
        } else if (a[i] > second && a[i] != first) {
            second = a[i];
        }
    }
    printf("%d\n", second);
    return 0;
}

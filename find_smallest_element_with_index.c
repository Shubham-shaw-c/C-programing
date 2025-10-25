#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {14, 7, 93, 2, 55, 61};
    int n = 6, i, pos = 0;
    for (i = 1; i < n; i++) {
        if (a[i] < a[pos]) {
            pos = i;
        }
    }
    printf("%d at index %d\n", a[pos], pos);
    return 0;
}

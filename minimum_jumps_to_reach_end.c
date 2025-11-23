#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {2, 3, 1, 1, 2, 4, 2, 0, 1, 1}, n = 10, i, jumps = 0, end = 0, far = 0;
    for (i = 0; i < n - 1; i++) {
        if (i + a[i] > far) far = i + a[i];
        if (i == end) {
            jumps++;
            end = far;
        }
    }
    printf("%d\n", jumps);
    return 0;
}

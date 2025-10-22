#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isSorted(int a[], int n) {
    int i;
    for (i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) return 0;
    }
    return 1;
}

int main() {
    int x[] = {1, 2, 2, 5, 9}, y[] = {1, 3, 2, 4};
    printf("%d %d\n", isSorted(x, 5), isSorted(y, 4));
    return 0;
}

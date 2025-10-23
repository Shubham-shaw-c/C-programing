#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(int a[], int n) {
    int l = 0, r = n - 1;
    while (l < r) {
        int t = a[l];
        a[l++] = a[r];
        a[r--] = t;
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int i;
    reverse(a, 7);
    for (i = 0; i < 7; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

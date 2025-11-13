#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {4, 5, 2, 25, 7, 8}, n = 6, res[6], st[6], top = -1, i;
    for (i = n - 1; i >= 0; i--) {
        while (top >= 0 && st[top] <= a[i]) top--;
        res[i] = top >= 0 ? st[top] : -1;
        st[++top] = a[i];
    }
    for (i = 0; i < n; i++) printf("%d ", res[i]);
    printf("\n");
    return 0;
}

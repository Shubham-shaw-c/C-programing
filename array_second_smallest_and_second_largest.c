#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {23, 5, 17, 9, 41, 3}, n = 6, i;
    int s1 = 1 << 30, s2 = 1 << 30, l1 = -1, l2 = -1;
    for (i = 0; i < n; i++) {
        if (a[i] < s1) { s2 = s1; s1 = a[i]; }
        else if (a[i] < s2) s2 = a[i];
        if (a[i] > l1) { l2 = l1; l1 = a[i]; }
        else if (a[i] > l2) l2 = a[i];
    }
    printf("%d %d\n", s2, l2);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 3, 4, 5, 7}, b[] = {2, 3, 5, 6}, i = 0, j = 0, last = -1;
    while (i < 5 || j < 4) {
        int v;
        if (j >= 4 || (i < 5 && a[i] <= b[j])) v = a[i++];
        else v = b[j++];
        if (v != last) {
            printf("%d ", v);
            last = v;
        }
    }
    printf("\n");
    return 0;
}

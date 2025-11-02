#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 2, 2, 3, 4, 6}, b[] = {2, 2, 4, 5, 6}, i = 0, j = 0;
    while (i < 6 && j < 5) {
        if (a[i] == b[j]) {
            printf("%d ", a[i]);
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }
    printf("\n");
    return 0;
}

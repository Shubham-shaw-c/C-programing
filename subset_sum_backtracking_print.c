#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[] = {10, 7, 5, 18, 12, 20, 15}, pick[7];

void go(int i, int rem) {
    int k;
    if (rem == 0) {
        for (k = 0; k < i; k++) {
            if (pick[k]) printf("%d ", a[k]);
        }
        printf("| ");
        return;
    }
    if (i == 7 || rem < 0) return;
    pick[i] = 1;
    go(i + 1, rem - a[i]);
    pick[i] = 0;
    go(i + 1, rem);
}

int main() {
    go(0, 35);
    printf("\n");
    return 0;
}

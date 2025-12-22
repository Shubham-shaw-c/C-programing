#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[] = {1, 2, 3}, used[3], cur[3];

void perm(int len) {
    int i;
    if (len == 3) {
        for (i = 0; i < 3; i++) printf("%d", cur[i]);
        printf(" ");
        return;
    }
    for (i = 0; i < 3; i++) {
        if (!used[i]) {
            used[i] = 1;
            cur[len] = a[i];
            perm(len + 1);
            used[i] = 0;
        }
    }
}

int main() {
    perm(0);
    printf("\n");
    return 0;
}

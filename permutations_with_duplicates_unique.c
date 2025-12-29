#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int a[] = {1, 1, 2}, used[3], cur[3];

void perm(int len) {
    int i;
    if (len == 3) {
        for (i = 0; i < 3; i++) printf("%d", cur[i]);
        printf(" ");
        return;
    }
    for (i = 0; i < 3; i++) {
        if (used[i] || (i > 0 && a[i] == a[i - 1] && !used[i - 1])) continue;
        used[i] = 1;
        cur[len] = a[i];
        perm(len + 1);
        used[i] = 0;
    }
}

int main() {
    qsort(a, 3, sizeof(int), cmp);
    perm(0);
    printf("\n");
    return 0;
}

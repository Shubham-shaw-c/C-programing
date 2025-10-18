#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int main() {
    int d[] = {3, 9, 1, 4, 7}, i;
    qsort(d, 5, sizeof(int), cmp);
    for (i = 0; i < 5; i++) printf("%d", d[i]);
    printf("\n");
    return 0;
}

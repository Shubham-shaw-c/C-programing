#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[] = {1, 2, 3}, cur[3];

void gen(int idx, int len) {
    int i;
    printf("{");
    for (i = 0; i < len; i++) printf("%d%s", cur[i], i + 1 < len ? "," : "");
    printf("} ");
    for (i = idx; i < 3; i++) {
        cur[len] = a[i];
        gen(i + 1, len + 1);
    }
}

int main() {
    gen(0, 0);
    printf("\n");
    return 0;
}

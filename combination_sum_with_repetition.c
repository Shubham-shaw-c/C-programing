#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int c[] = {2, 3, 6, 7}, cur[8];

void go(int idx, int rem, int len) {
    int i;
    if (rem == 0) {
        printf("[");
        for (i = 0; i < len; i++) printf("%d%s", cur[i], i + 1 < len ? "," : "");
        printf("] ");
        return;
    }
    for (i = idx; i < 4; i++) {
        if (c[i] <= rem) {
            cur[len] = c[i];
            go(i, rem - c[i], len + 1);
        }
    }
}

int main() {
    go(0, 7, 0);
    printf("\n");
    return 0;
}

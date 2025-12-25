#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char buf[16];

void gen(int open, int close, int n, int len) {
    if (len == 2 * n) {
        buf[len] = '\0';
        printf("%s ", buf);
        return;
    }
    if (open < n) {
        buf[len] = '(';
        gen(open + 1, close, n, len + 1);
    }
    if (close < open) {
        buf[len] = ')';
        gen(open, close + 1, n, len + 1);
    }
}

int main() {
    gen(0, 0, 3, 0);
    printf("\n");
    return 0;
}

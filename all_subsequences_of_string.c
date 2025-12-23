#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[] = "abc", out[8];

void go(int i, int len) {
    if (!s[i]) {
        out[len] = '\0';
        printf("\"%s\" ", out);
        return;
    }
    go(i + 1, len);
    out[len] = s[i];
    go(i + 1, len + 1);
}

int main() {
    go(0, 0);
    printf("\n");
    return 0;
}

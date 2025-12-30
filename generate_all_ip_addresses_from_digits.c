#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[] = "25525511";
int n = 8;

void go(int pos, int part, char *out, int len) {
    int i, v = 0;
    if (part == 4) {
        if (pos == n) {
            out[len - 1] = '\0';
            printf("%s ", out);
        }
        return;
    }
    for (i = 0; i < 3 && pos + i < n; i++) {
        v = v * 10 + s[pos + i] - '0';
        if (v > 255 || (i > 0 && s[pos] == '0')) break;
        memcpy(out + len, s + pos, i + 1);
        out[len + i + 1] = '.';
        go(pos + i + 1, part + 1, out, len + i + 2);
    }
}

int main() {
    char out[32];
    go(0, 0, out, 0);
    printf("\n");
    return 0;
}

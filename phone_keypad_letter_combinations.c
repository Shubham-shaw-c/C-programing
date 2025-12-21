#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *map[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
char digits[] = "23", cur[8];

void go(int i) {
    int k;
    if (!digits[i]) {
        cur[i] = '\0';
        printf("%s ", cur);
        return;
    }
    for (k = 0; map[digits[i] - '0'][k]; k++) {
        cur[i] = map[digits[i] - '0'][k];
        go(i + 1);
    }
}

int main() {
    go(0);
    printf("\n");
    return 0;
}

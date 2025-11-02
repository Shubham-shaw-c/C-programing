#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int s[] = {1, 2, 8, 15, 17}, e[] = {3, 6, 10, 18, 20}, n = 5, i;
    int cs = s[0], ce = e[0];
    for (i = 1; i < n; i++) {
        if (s[i] <= ce) {
            if (e[i] > ce) ce = e[i];
        } else {
            printf("[%d,%d] ", cs, ce);
            cs = s[i];
            ce = e[i];
        }
    }
    printf("[%d,%d]\n", cs, ce);
    return 0;
}

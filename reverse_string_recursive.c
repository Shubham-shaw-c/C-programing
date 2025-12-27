#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev(char *s, int l, int r) {
    char t;
    if (l >= r) return;
    t = s[l];
    s[l] = s[r];
    s[r] = t;
    rev(s, l + 1, r - 1);
}

int main() {
    char s[] = "recursion";
    rev(s, 0, 8);
    printf("%s\n", s);
    return 0;
}

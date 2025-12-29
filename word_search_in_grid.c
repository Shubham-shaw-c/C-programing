#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char g[3][4] = {{'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};

int find(char *w, int r, int c, int i) {
    char t;
    int ok;
    if (!w[i]) return 1;
    if (r < 0 || c < 0 || r > 2 || c > 3 || g[r][c] != w[i]) return 0;
    t = g[r][c];
    g[r][c] = '#';
    ok = find(w, r + 1, c, i + 1) || find(w, r - 1, c, i + 1) || find(w, r, c + 1, i + 1) || find(w, r, c - 1, i + 1);
    g[r][c] = t;
    return ok;
}

int main() {
    int i, j, found = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) found |= find("SEE", i, j, 0);
    }
    printf(found ? "found\n" : "missing\n");
    return 0;
}

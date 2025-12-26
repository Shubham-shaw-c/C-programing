#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int g[4][4] = {{0, 1, 1, 1}, {1, 0, 1, 0}, {1, 1, 0, 1}, {1, 0, 1, 0}}, color[4];

int go(int v, int m) {
    int c, u;
    if (v == 4) return 1;
    for (c = 1; c <= m; c++) {
        int ok = 1;
        for (u = 0; u < 4; u++) {
            if (g[v][u] && color[u] == c) ok = 0;
        }
        if (ok) {
            color[v] = c;
            if (go(v + 1, m)) return 1;
            color[v] = 0;
        }
    }
    return 0;
}

int main() {
    int m;
    for (m = 1; m <= 4; m++) {
        if (go(0, m)) {
            printf("%d colors\n", m);
            break;
        }
    }
    return 0;
}

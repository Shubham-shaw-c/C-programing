#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int b[5][5], dr[] = {2, 1, -1, -2, -2, -1, 1, 2}, dc[] = {1, 2, 2, 1, -1, -2, -2, -1};

int tour(int r, int c, int step) {
    int k;
    b[r][c] = step;
    if (step == 25) return 1;
    for (k = 0; k < 8; k++) {
        int nr = r + dr[k], nc = c + dc[k];
        if (nr >= 0 && nc >= 0 && nr < 5 && nc < 5 && !b[nr][nc] && tour(nr, nc, step + 1)) return 1;
    }
    b[r][c] = 0;
    return 0;
}

int main() {
    int i, j;
    tour(0, 0, 1);
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) printf("%3d", b[i][j]);
        printf("\n");
    }
    return 0;
}

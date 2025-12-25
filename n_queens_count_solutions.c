#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cols[10], n = 6, count;

int safe(int r, int c) {
    int i;
    for (i = 0; i < r; i++) {
        if (cols[i] == c || cols[i] - c == i - r || cols[i] - c == r - i) return 0;
    }
    return 1;
}

void place(int r) {
    int c;
    if (r == n) {
        count++;
        return;
    }
    for (c = 0; c < n; c++) {
        if (safe(r, c)) {
            cols[r] = c;
            place(r + 1);
        }
    }
}

int main() {
    place(0);
    printf("%d\n", count);
    return 0;
}

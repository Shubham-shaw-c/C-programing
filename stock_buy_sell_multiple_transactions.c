#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int p[] = {7, 1, 5, 3, 6, 4, 8}, n = 7, i, profit = 0;
    for (i = 1; i < n; i++) {
        if (p[i] > p[i - 1]) profit += p[i] - p[i - 1];
    }
    printf("%d\n", profit);
    return 0;
}

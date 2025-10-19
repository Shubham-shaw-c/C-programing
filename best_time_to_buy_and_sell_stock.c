#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int p[] = {7, 1, 5, 3, 6, 4}, n = 6, i, low = p[0], profit = 0;
    for (i = 1; i < n; i++) {
        if (p[i] < low) low = p[i];
        else if (p[i] - low > profit) profit = p[i] - low;
    }
    printf("%d\n", profit);
    return 0;
}

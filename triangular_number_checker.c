#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isTriangular(int n) {
    int k = 1, total = 0;
    while (total < n) {
        total += k;
        k++;
    }
    return total == n;
}

int main() {
    int i, count = 0;
    for (i = 1; i <= 500; i++) {
        count += isTriangular(i) ? 1 : 0;
    }
    printf("Total in 1..500: %d\n", count);
    return 0;
}

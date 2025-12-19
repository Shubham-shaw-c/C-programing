#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isDuck(int n) {
    while (n > 0) {
        if (n % 10 == 0) {
            return 1;
        }
        n /= 10;
    }
    return 0;
}

int main() {
    int i;
    for (i = 1; i <= 200; i++) {
        if (isDuck(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

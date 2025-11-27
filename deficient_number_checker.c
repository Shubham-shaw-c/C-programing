#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isDeficient(int n) {
    int i, sum = 0;
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum < n;
}

int main() {
    int i;
    for (i = 1; i <= 200; i++) {
        if (isDeficient(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

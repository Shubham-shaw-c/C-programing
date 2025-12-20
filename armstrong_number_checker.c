#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isArmstrong(int n) {
    int temp = n, digits = 0, sum = 0, i, p;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        p = 1;
        for (i = 0; i < digits; i++) {
            p *= temp % 10;
        }
        sum += p;
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int n = 1, found = 0;
    while (found < 8) {
        if (isArmstrong(n)) {
            printf("%d ", n);
            found++;
        }
        n++;
    }
    printf("\n");
    return 0;
}

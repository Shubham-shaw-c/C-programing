#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isDisarium(int n) {
    int len = 0, temp = n, sum = 0, i, p;
    while (temp) {
        len++;
        temp /= 10;
    }
    temp = n;
    while (temp) {
        p = 1;
        for (i = 0; i < len; i++) {
            p *= temp % 10;
        }
        sum += p;
        len--;
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int i;
    for (i = 1; i <= 200; i++) {
        if (isDisarium(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

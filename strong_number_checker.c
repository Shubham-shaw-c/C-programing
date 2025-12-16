#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isStrong(int n) {
    int fact[10], i, temp = n, sum = 0;
    fact[0] = 1;
    for (i = 1; i < 10; i++) {
        fact[i] = fact[i - 1] * i;
    }
    while (temp > 0) {
        sum += fact[temp % 10];
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int i;
    for (i = 1; i <= 200; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

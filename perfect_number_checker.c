#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPerfect(int n) {
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return n > 1 && sum == n;
}

int main() {
    int i, count = 0;
    for (i = 1; i <= 500; i++) {
        count += isPerfect(i) ? 1 : 0;
    }
    printf("Total in 1..500: %d\n", count);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPrime(int n) {
    int i;
    if (n < 2) {
        return 0;
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int digitSum(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int hasPrimeDigitSum(int n) {
    return isPrime(digitSum(n));
}

int main() {
    int n = 1, found = 0;
    while (found < 8) {
        if (hasPrimeDigitSum(n)) {
            printf("%d ", n);
            found++;
        }
        n++;
    }
    printf("\n");
    return 0;
}

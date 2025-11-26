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

int isTwinPrime(int n) {
    return isPrime(n) && (isPrime(n - 2) || isPrime(n + 2));
}

int main() {
    int i, last = 0, sum = 0;
    for (i = 1; i <= 300; i++) {
        if (isTwinPrime(i)) {
            sum += i;
            last = i;
        }
    }
    printf("sum=%d last=%d\n", sum, last);
    return 0;
}

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

int reverseNumber(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

int isEmirp(int n) {
    int r = reverseNumber(n);
    return isPrime(n) && r != n && isPrime(r);
}

int main() {
    int i, printed = 0;
    for (i = 300; i >= 1 && printed < 6; i--) {
        if (isEmirp(i)) {
            printf("%d ", i);
            printed++;
        }
    }
    printf("\n");
    return 0;
}

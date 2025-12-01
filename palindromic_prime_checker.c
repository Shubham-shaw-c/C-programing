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

int isPalindromicPrime(int n) {
    return isPrime(n) && reverseNumber(n) == n;
}

int main() {
    int i, count = 0;
    for (i = 1; i <= 500; i++) {
        count += isPalindromicPrime(i) ? 1 : 0;
    }
    printf("Total in 1..500: %d\n", count);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isFibonacci(int n) {
    int a = 0, b = 1, c;
    while (b < n) {
        c = a + b;
        a = b;
        b = c;
    }
    return n == 0 || b == n;
}

int main() {
    int n = 1, found = 0;
    while (found < 8) {
        if (isFibonacci(n)) {
            printf("%d ", n);
            found++;
        }
        n++;
    }
    printf("\n");
    return 0;
}

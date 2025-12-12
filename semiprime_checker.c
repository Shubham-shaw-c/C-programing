#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isSemiprime(int n) {
    int i, count = 0;
    for (i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            count++;
        }
    }
    if (n > 1) {
        count++;
    }
    return count == 2;
}

int main() {
    int tests[] = {7, 12, 28, 45, 64, 89, 121, 153, 370, 496};
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d -> %s\n", tests[i], isSemiprime(tests[i]) ? "yes" : "no");
    }
    return 0;
}

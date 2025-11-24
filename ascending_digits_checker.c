#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hasAscendingDigits(int n) {
    int prev = 10;
    while (n > 0) {
        if (n % 10 >= prev) {
            return 0;
        }
        prev = n % 10;
        n /= 10;
    }
    return 1;
}

int main() {
    int tests[] = {7, 12, 28, 45, 64, 89, 121, 153, 370, 496};
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d -> %s\n", tests[i], hasAscendingDigits(tests[i]) ? "yes" : "no");
    }
    return 0;
}

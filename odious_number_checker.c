#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isOdious(int n) {
    int parity = 0;
    while (n) {
        parity ^= 1;
        n &= n - 1;
    }
    return parity;
}

int main() {
    int tests[] = {7, 12, 28, 45, 64, 89, 121, 153, 370, 496};
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d -> %s\n", tests[i], isOdious(tests[i]) ? "yes" : "no");
    }
    return 0;
}

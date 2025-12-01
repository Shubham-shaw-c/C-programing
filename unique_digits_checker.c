#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hasUniqueDigits(int n) {
    int seen[10] = {0};
    while (n > 0) {
        if (seen[n % 10]++) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main() {
    int i, last = 0, sum = 0;
    for (i = 1; i <= 300; i++) {
        if (hasUniqueDigits(i)) {
            sum += i;
            last = i;
        }
    }
    printf("sum=%d last=%d\n", sum, last);
    return 0;
}

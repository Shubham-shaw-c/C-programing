#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int i, last = 0, sum = 0;
    for (i = 1; i <= 300; i++) {
        if (isPowerOfTwo(i)) {
            sum += i;
            last = i;
        }
    }
    printf("sum=%d last=%d\n", sum, last);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isHappy(int n) {
    int s;
    while (n != 1 && n != 4) {
        s = 0;
        while (n > 0) {
            s += (n % 10) * (n % 10);
            n /= 10;
        }
        n = s;
    }
    return n == 1;
}

int main() {
    int i, count = 0;
    for (i = 1; i <= 500; i++) {
        count += isHappy(i) ? 1 : 0;
    }
    printf("Total in 1..500: %d\n", count);
    return 0;
}

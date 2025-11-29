#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isSpy(int n) {
    int sum = 0, prod = 1;
    while (n > 0) {
        sum += n % 10;
        prod *= n % 10;
        n /= 10;
    }
    return sum == prod;
}

int main() {
    int i, count = 0;
    for (i = 1; i <= 500; i++) {
        count += isSpy(i) ? 1 : 0;
    }
    printf("Total in 1..500: %d\n", count);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int digitSum(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int isSmith(int n) {
    int temp = n, i, sum = 0, factors = 0;
    for (i = 2; i * i <= temp; i++) {
        while (temp % i == 0) {
            sum += digitSum(i);
            temp /= i;
            factors++;
        }
    }
    if (temp > 1) {
        sum += digitSum(temp);
        factors++;
    }
    return factors > 1 && sum == digitSum(n);
}

int main() {
    int i;
    for (i = 1; i <= 200; i++) {
        if (isSmith(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

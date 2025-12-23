#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int digitSum(int n) {
    return n == 0 ? 0 : n % 10 + digitSum(n / 10);
}

int main() {
    printf("%d\n", digitSum(98765));
    return 0;
}

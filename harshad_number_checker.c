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

int isHarshad(int n) {
    return n % digitSum(n) == 0;
}

int main() {
    int tests[] = {7, 12, 28, 45, 64, 89, 121, 153, 370, 496};
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d -> %s\n", tests[i], isHarshad(tests[i]) ? "yes" : "no");
    }
    return 0;
}

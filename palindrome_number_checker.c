#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverseNumber(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

int isPalindrome(int n) {
    return reverseNumber(n) == n;
}

int main() {
    int tests[] = {7, 12, 28, 45, 64, 89, 121, 153, 370, 496};
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d -> %s\n", tests[i], isPalindrome(tests[i]) ? "yes" : "no");
    }
    return 0;
}

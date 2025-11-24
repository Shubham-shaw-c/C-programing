#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPerfectCube(int n) {
    int r = 1;
    while (r * r * r < n) {
        r++;
    }
    return r * r * r == n;
}

int main() {
    int i, last = 0, sum = 0;
    for (i = 1; i <= 300; i++) {
        if (isPerfectCube(i)) {
            sum += i;
            last = i;
        }
    }
    printf("sum=%d last=%d\n", sum, last);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 4, 20, 3, 10, 5}, n = 6, target = 33, l = 0, i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += a[i];
        while (sum > target) sum -= a[l++];
        if (sum == target) {
            printf("%d to %d\n", l, i);
            return 0;
        }
    }
    printf("not found\n");
    return 0;
}

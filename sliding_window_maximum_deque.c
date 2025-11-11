#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 3, -1, -3, 5, 3, 6, 7}, n = 8, k = 3, dq[8], head = 0, tail = 0, i;
    for (i = 0; i < n; i++) {
        if (head < tail && dq[head] <= i - k) head++;
        while (head < tail && a[dq[tail - 1]] <= a[i]) tail--;
        dq[tail++] = i;
        if (i >= k - 1) printf("%d ", a[dq[head]]);
    }
    printf("\n");
    return 0;
}

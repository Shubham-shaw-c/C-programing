#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {3, 1, 4, 1, 5, 9, 2, 6}, n = 8, i;
    int prefix[9] = {0};
    for (i = 0; i < n; i++) prefix[i + 1] = prefix[i] + a[i];
    printf("%d\n", prefix[6] - prefix[2]);
    printf("%d\n", prefix[8] - prefix[0]);
    return 0;
}

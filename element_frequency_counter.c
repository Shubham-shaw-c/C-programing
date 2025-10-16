#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {4, 2, 4, 3, 2, 4, 1, 3}, n = 8, i, j;
    int seen[8] = {0};
    for (i = 0; i < n; i++) {
        int c = 1;
        if (seen[i]) continue;
        for (j = i + 1; j < n; j++) {
            if (a[j] == a[i]) {
                c++;
                seen[j] = 1;
            }
        }
        printf("%d -> %d\n", a[i], c);
    }
    return 0;
}

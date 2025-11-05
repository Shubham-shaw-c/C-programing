#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {2, 2, 1, 1, 2, 2, 3, 2}, n = 8, i, cand = 0, cnt = 0;
    for (i = 0; i < n; i++) {
        if (cnt == 0) cand = a[i];
        cnt += (a[i] == cand) ? 1 : -1;
    }
    cnt = 0;
    for (i = 0; i < n; i++) cnt += a[i] == cand;
    if (cnt > n / 2) printf("%d\n", cand);
    else printf("none\n");
    return 0;
}

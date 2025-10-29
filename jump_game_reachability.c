#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {2, 3, 1, 1, 4}, n = 5, i, reach = 0;
    for (i = 0; i < n && i <= reach; i++) {
        if (i + a[i] > reach) reach = i + a[i];
    }
    printf(reach >= n - 1 ? "reachable\n" : "stuck\n");
    return 0;
}

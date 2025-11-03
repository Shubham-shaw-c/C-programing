#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {1, 2, 3, 4}, b[] = {1, 2, 3, 4}, i, same = 1;
    for (i = 0; i < 4; i++) {
        if (a[i] != b[i]) {
            same = 0;
            break;
        }
    }
    printf(same ? "equal\n" : "different\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[] = {3, 1, 3, 4, 2};
    int slow = a[0], fast = a[0];
    do {
        slow = a[slow];
        fast = a[a[fast]];
    } while (slow != fast);
    slow = a[0];
    while (slow != fast) {
        slow = a[slow];
        fast = a[fast];
    }
    printf("%d\n", slow);
    return 0;
}

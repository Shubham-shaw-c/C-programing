#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hanoi(int n, char from, char to, char via, int *count) {
    if (n == 0) return;
    hanoi(n - 1, from, via, to, count);
    (*count)++;
    printf("move disk %d from %c to %c\n", n, from, to);
    hanoi(n - 1, via, to, from, count);
}

int main() {
    int count = 0;
    hanoi(3, 'A', 'C', 'B', &count);
    printf("total=%d\n", count);
    return 0;
}

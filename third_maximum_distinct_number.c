#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <limits.h>

int main() {
    int a[] = {2, 2, 3, 1, 5, 5, 4};
    int n = 7, i;
    long long m1 = LLONG_MIN, m2 = LLONG_MIN, m3 = LLONG_MIN;
    for (i = 0; i < n; i++) {
        long long v = a[i];
        if (v == m1 || v == m2 || v == m3) continue;
        if (v > m1) {
            m3 = m2;
            m2 = m1;
            m1 = v;
        } else if (v > m2) {
            m3 = m2;
            m2 = v;
        } else if (v > m3) {
            m3 = v;
        }
    }
    printf("%lld\n", m3 == LLONG_MIN ? m1 : m3);
    return 0;
}

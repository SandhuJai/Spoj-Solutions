#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        long long A, B, C;
        scanf("%lld %lld %lld", &A, &B, &C);

        long long a, d, n;

        a = (2*A*C - 3*A*A - 5*A*B - 2*B*B)/(2*C - 5*A - 5*B);
        d = (B*B - A*A)/(2*C - 5*A - 5*B);
        n = (2*C)/(A+B);

        printf("%lld\n", n);
        for(int i = 0; i < n; i++) {
            printf("%lld ", a+(i-1)*d);
        }
    }
}
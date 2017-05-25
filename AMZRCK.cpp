#include <stdio.h>

long long fib[1000000];

long long answer(int n) {
    if(n == 0) {
        return 0;
    }

    if(fib[n] != 0)
        return fib[n];

    fib[n] = answer(n-1) + answer(n-2);
    return fib[n];
}

int main() {
    int t;
    scanf("%d", &t);
    fib[0] = 0;
    fib[1] = 2;
    fib[2] = 3;

    while(t--) {
        int n;
        scanf("%d", &n);
        
        printf("%lld\n", answer(n));
    }
}
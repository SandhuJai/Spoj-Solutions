#include <stdio.h>

long long gcd(long long a, long long b)
{
    // base case
    if (a == b)
        return a;
 
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

long long lcm(long long a, long long b) {
    return (a*b)/gcd(a,b);
}

int main() {
    long long w, h;
    scanf("%lld %lld", &w, &h);

    while((w!=0) && (h!=0)) {
        printf("%lld\n", lcm(w, h));
        scanf("%lld %lld", &w, &h);
    }
}
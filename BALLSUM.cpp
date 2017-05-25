#include <stdio.h>

unsigned long long int gcd(unsigned long long int n, unsigned long long int d) {
    if (d != 0)
       return gcd(d, n%d);
    else 
       return n;

}

int main() {
    unsigned long long int n, k;
    scanf("%llu %llu", &n, &k);

    while((n != -1) && (k != -1)) {
        unsigned long long int num = 2*(k-n-1);
        unsigned long long int den = n-1;

        unsigned long long int hcf = gcd(num, den);

        unsigned long long int p = num/hcf;
        unsigned long long int q = den/hcf;

        printf("%llu/%llu\n", p, q);

        scanf("%llu %llu", &n, &k);
    }
}
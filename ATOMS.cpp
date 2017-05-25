#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        double n, k, m;
        scanf("%lf %lf %lf", &n, &k, &m);

        if(m < n) {
            printf("0\n");
            continue;
        }

        double ans = log(m/n)/log(k);

        unsigned long long int answer = (unsigned long long int) ans;

        printf("%lld\n", answer);
    }
}
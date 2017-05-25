#include <stdio.h>
#define LIMIT 1000001

long long answers[LIMIT];
long long dp[LIMIT];

void fn() {
    answers[0] = 0;
    for(long long i = 1; i <= LIMIT; i++) {
        for(long long j = i; j <= LIMIT; j = j+i) {
            answers[j] += i;
        }
    }
}

void display() {
    for(int i = 0; i <= LIMIT; i++) {
        printf("%d\n", answers[i]);
    }
}

long long answer(long long n) {
    dp[0] = 0;
    dp[1] = 0;

    if(n == 1 || n== 0) 
        return 0;

    if(dp[n] != 0) {
        return dp[n];
    }

    long long ans = answer(n-1) + answers[n]-n;
    dp[n] = ans;
    return ans;
}

int main() {
    fn();   // Precomputation results

    int t;
    scanf("%d", &t);

    
    dp[0] = 0;
    dp[1] = 0;

    while(t--) {
        int n;
        scanf("%d", &n);
        
        printf("%lld\n", answer(n));
    }

    return 0;
}
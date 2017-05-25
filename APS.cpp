#include <stdio.h>
#define LIMIT 10000001

long long answers[LIMIT];
long long finalAns[LIMIT];

// Precomputation
void fn() {
    answers[0] = -1;
    answers[1] = -1;

    for(int i = 2; i < LIMIT; i++) {
        if(answers[i] == 0) {
            for(int j = i; j < LIMIT; j += i) {
                if(answers[j] == 0) {
                    answers[j] = i;
                }
            }
        }
    }
}

long long getAnswer(long long n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 0;

    if(finalAns[n] != 0)
        return finalAns[n];

    finalAns[n] = getAnswer(n-1) + answers[n];

    return finalAns[n];
}

int main() {
    finalAns[0] = 0;
    finalAns[1] = 0;
    fn();

    int testCases;
    scanf("%d", &testCases);

    while(testCases--) {
        long long n;
        scanf("%lld", &n);

        printf("%lld\n", getAnswer(n));
    }
}
#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    while(testCases--) {
        int n;
        long long ps = 0;
        long long ts = 0;

        scanf("%d", &n);
        long long arr[n];

        scanf("%lld", &arr[0]);

        for(int i = 1; i < n; i++) {
            scanf("%lld", &arr[i]);
            int temp = ps + i*(arr[i]-arr[i-1]);
            ps = temp;
            ts += temp;
        }

        printf("%lld\n", ts);
    }

    return 0;
}
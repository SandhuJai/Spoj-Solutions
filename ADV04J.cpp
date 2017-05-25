#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    while(testCases--) {
        int n;
        scanf("%d", &n);

        if(n%2 == 0) {
            printf("%d\n", n/2 + 1);
        }else {
            printf("%d\n", n/2 + 2);
        }
    }
}
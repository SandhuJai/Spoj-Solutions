#include <stdio.h>
int dpMatrix[2001][2001];
int weight[2001];
int value[2001];

int max(int a, int b) {
    if(a > b)
        return a;
    else 
        return b;
}

void dp(int totalWeight, int totalItems) {

    for(int i = 1; i <= totalItems; i++) {
        for(int j = 1; j <= totalWeight; j++) {
            if(weight[i] > j) {
                dpMatrix[i][j] = dpMatrix[i-1][j];
            }else {
                dpMatrix[i][j] = max(value[i]+dpMatrix[i-1][j-weight[i]], dpMatrix[i-1][j]);
            }
        }
    }
}

int main() {
    int totalWeight, totalItems;
    scanf("%d %d", &totalWeight, &totalItems);

    for(int i = 1; i <= totalItems; i++) {
        scanf("%d %d", &weight[i], &value[i]);
    }    

    dp(totalWeight, totalItems);

    printf("%d", dpMatrix[totalItems][totalWeight]);
}
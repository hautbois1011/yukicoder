#include <stdio.h>
#define MOD 17

int main(void)
{
    int Q;
    int i, j, k, l;
    scanf("%d", &Q);

    int data[Q];
    for(i=0; i<Q; i++)
        scanf("%d", &data[i]);

    int max=0;
    for(j=0; j<Q; j++)
        max = ((data[j]>max) ? data[j] : max);

    int dp[max];

    dp[0] = dp[1] = dp[2] = 0;
    dp[3] = 1;
    for(k=4; k < max; k++)
        dp[k] = (dp[k-1] + dp[k-2] + dp[k-3] + dp[k-4])%MOD;

    for(l=0; l<Q; l++)
        printf("%d\n", dp[data[l]-1]);

    return 0;
}

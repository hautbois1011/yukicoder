#include <stdio.h>
#define MOD 1000000007
typedef long long ll;

int main(void)
{
    ll N, ans=1;
    scanf("%lld", &N);

    for(int i=1; i <= N; i++)
        ans = ans*i%MOD;
    for(int i=1; i <= 2*N-1; i+=2)
        ans = ans*i%MOD;

    printf("%lld", ans);

    return 0;
}

#include <stdio.h>
#define MOD 1000003
typedef long long ll;

ll modpow(ll a, ll p, ll m)
{
    a %= m;
    ll ans = 1;
    while(p > 0)
    {
        ans = (ans * ((p&1) ? a : 1))%m;
        p >>= 1;
        a = (a*a)%m;
    }
    return ans;
}

int main(void)
{
    ll x, N, ans=0;
    scanf("%lld %lld", &x, &N);
    for(int i=0; i<N; i++)
    {
        ll a;
        scanf("%lld", &a);
        ans = (ans + modpow(x, a, MOD))%MOD;
    }
    printf("%lld", ans);
    return 0;
}

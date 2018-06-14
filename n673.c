#include <stdio.h>
#define MOD 1000000007
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

// B*C*(C^(D)-1)/(C-1) or B*D(C==1)

int main(void)
{
    ll B, C, D, ans;
    scanf("%lld %lld %lld", &B, &C, &D);

    B %= MOD;
    C %= MOD;

    ans = (B*C)%MOD;
    if(C != 1)
    {
        ans = (ans*(modpow(C, D, MOD) - 1)%MOD)%MOD;
        ans = (ans*(modpow(C-1, MOD-2, MOD))%MOD)%MOD;
    }
    else
    {
        D %= MOD;
        ans = (ans*D)%MOD;
    }

    printf("%lld\n", ans);

    return 0;
}

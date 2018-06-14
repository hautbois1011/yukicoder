#include <stdio.h>
typedef long long ll;


int main(void)
{
    ll N, M;
    scanf("%lld %lld", &N, &M);

    ll U = N/2, L = N - U;

    if(M < N-1 || M > U*L)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");

        for(ll i=1; i<N; i++)
            printf("%lld ", i);
        printf("%lld\n", N);

        for (ll i=1; i <= N - N/2; i++)
        {
            printf("%lld %lld\n", i, i+N/2);
        }

    }

    return 0;
}

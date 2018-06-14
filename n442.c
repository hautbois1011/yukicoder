#include <stdio.h>
typedef long long ll;

ll gcd(ll x, ll y)
{
    ll r ,tmp;
    if(x < y)
    {
      tmp = x;
      x = y;
      y = tmp;
    }

    r = x%y;
    while(r!=0)
    {
      x = y;
      y = r;
      r = x%y;
    }
    return y;
}

int main(void)
{
  ll A, B, S, G;
  scanf("%lld %lld", &A, &B);
  S = A+B;
  G = gcd(A, B);
  S /= G;

  printf("%lld\n", G*gcd(S, G));

  return 0;
}

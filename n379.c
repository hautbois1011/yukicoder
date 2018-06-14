#include <stdio.h>
typedef long long ll;

int main(void)
{
	ll N, G, V;
	long double ans;
	scanf("%lld %lld %lld", &N, &G, &V);

	ans = (N/5)*G/(long double)(V);
	printf("%.13Lf", ans);
}


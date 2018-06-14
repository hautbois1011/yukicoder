#include <stdio.h>
typedef long long ll;

int main(void)
{
	ll N, ans=0;
	scanf("%lld", &N);

	while(N > 0)
	{
		if(N&1)	ans++;
		N >>= 1;
	}

	printf("%lld", ans);

	return 0;
}

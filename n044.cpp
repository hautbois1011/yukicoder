#include <iostream>
using namespace std;
typedef long long ll;

int main(void)
{
    int N;
    cin >> N;
    ll dp[N+1];
    dp[0] = dp[1] = 1;
    for(int i=2; i<N+1; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[N] << endl;
    return 0;
}

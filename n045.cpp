#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(void)
{
    int N;
    cin >> N;
    int dp[N];
    int v[N];
    for(int i=0; i<N; i++)
        cin >> v[i];
    dp[0] = v[0];
    dp[1] = max(v[0], v[1]);
    for(int i=2; i<N; i++)
        dp[i] = max(dp[i-1], dp[i-2]+v[i]);
    cout << dp[N-1] << endl;
    return 0;
}


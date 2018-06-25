#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;
typedef long long ll;

int main(void)
{
    ll N, K, a, ans;
    cin >> N >> K;
    vector<ll> v, vv;
    for(int i = 0; i < N; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(int i = 1; i != v.size(); i++)
    {
        vv.push_back(llabs(v[i]-v[i-1]));
    }

    sort(vv.begin(), vv.end());

    ans = v.back() - v[0];
    for(int i = 0; i < K-1; i++)
    {
        ans -= vv.back();
        vv.pop_back();
    }

    cout << ans << endl;

    return 0;
}

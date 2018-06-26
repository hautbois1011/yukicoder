#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(void)
{
    int N;
    ll D;
    vector<pair<ll, ll> > vv;
    vector<pair<ll, ll> > dp;
    cin >> N >> D;

    for(int i=0; i < N; i++)
    {
        ll t, k;
        cin >> t >> k;
        vv.push_back(make_pair(t, k));
    }

    dp.push_back(make_pair(vv[0].first, vv[0].second - D));
    for(int i=1; i < N; i++)
    {
        dp.push_back(make_pair(max(dp.back().first + vv[i].first,
                                   dp.back().second + vv[i].first - D),
                               max(dp.back().first + vv[i].second - D,
                                   dp.back().second + vv[i].second)));
    }

    cout << max(dp.back().first, dp.back().second) << endl;

    return 0;
}

#include <iostream>
typedef long long ll;
using namespace std;

bool rec(ll a, ll b)
{
    // cout << a << " " << b << endl;
    if(a==0 || b==0)
        return true;

    if(a&1 && b&1)
        return false;
    else if(a&1)
        return rec(a-1, b>>1);
    else if(b&1)
        return rec(a>>1, b-1);
    else
        return rec(a>>1, b-1) | rec(a-1, b>>1);
}

int main(void)
{
    ll A, B;
    cin >> A >> B;
    if(rec(A, B))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}

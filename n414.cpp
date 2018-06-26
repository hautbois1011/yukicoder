#include <iostream>
using namespace std;
typedef long long ll;

int main(void)
{
    ll M;
    cin >> M;
    ll n=2;
    for(; n*n <= M; n++)
    {
        if(M%n == 0)
        {
            cout << n << " " << M/n << endl;
            return 0;
        }
    }
    cout << "1 " << M << endl;
    return 0;
}

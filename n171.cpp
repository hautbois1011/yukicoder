#include <iostream>
using namespace std;

int main(void)
{
    long long x, y, d;
    cin >> x >> y >> d;
    long long a = d+1 - (x<d ? d-x : 0) - (y<d ? d-y : 0);
    cout << (a >= 0 ? a : 0) << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll r, c;
        cin >> r >> c;
        if (r > c)
        {
            if (r % 2)
            {
                cout << (r - 1) * (r - 1) + c << endl;
            }
            else
            {
                cout << r * r - c + 1 << endl;
            }
        }
        else
        {
            if (c % 2)
            {
                cout << c * c - r + 1 << endl;
            }
            else
            {
                cout << (c - 1) * (c - 1) + r << endl;
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a % 2 && b % 2)
    {
        ll mn = min(a, b);
        if (mn == 1)
            cout << b * b << endl;
        else
            cout << a * b << endl;
        return;
    }
    ll mx = max(a, b);
    cout << mx * 2 << endl;
    return;
}
int main()
{
    ll t;
    cin >> t;
    ll x = t;
    while (t--)
    {
        solve();
    }

    return 0;
}
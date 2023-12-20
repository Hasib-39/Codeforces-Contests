#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll mx;
    cin >> mx;
    ll s = 0;
    for (ll i = 1; i < n; i++)
    {
        ll x;
        cin >> x;
        mx = max(mx, x);
        s += (mx - x);
    }

    cout << s;
    return 0;
}
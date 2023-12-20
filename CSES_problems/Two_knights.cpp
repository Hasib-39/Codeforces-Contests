#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll ans;
    for (ll i = 1; i <= n; i++)
    {
        ans = ((i * i) * (i * i - 1)) / 2;
        ans -= (4 * (i - 1) * (i - 2));

        cout << ans << endl;
    }
}
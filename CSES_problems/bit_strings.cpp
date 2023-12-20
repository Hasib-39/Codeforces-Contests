#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll ans = 1;
    for (ll i = 0; i < n; i++)
    {
        ans = (ans * 2) % (1000000007);
    }

    cout << ans << endl;
}
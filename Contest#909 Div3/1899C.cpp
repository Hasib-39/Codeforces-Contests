#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll mxsm = arr[0], sum = arr[0];
    for (ll i = 1; i < n; i++)
    {
        if (abs(arr[i] % 2) != abs(arr[i - 1] % 2))
            sum = max(sum + arr[i], arr[i]);
        else
            sum = arr[i];
        mxsm = max(mxsm, sum);
    }

    cout << mxsm << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
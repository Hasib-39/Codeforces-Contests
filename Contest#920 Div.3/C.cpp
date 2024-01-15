#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, f, a, b;
        cin >> n >> f >> a >> b;

        ll arr[n + 1];
        arr[0] = 0;
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        ll dif;
        for (ll i = 0; i < n; i++)
        {
            dif = (arr[i + 1] - arr[i]);
            ll x = dif * a;
            if (x > b)
            {
                f -= b;
            }
            else
            {
                f -= x;
            }
        }

        if (f > 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
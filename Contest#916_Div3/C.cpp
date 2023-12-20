#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        vector<ll> vca, vcb;
        cin >> a >> b;
        ll x;
        for (ll i = 0; i < a; i++)
        {
            cin >> x;
            vca.push_back(x);
        }
        ll bmax = 0;
        for (ll i = 0; i < a; i++)
        {
            cin >> x;
            vcb.push_back(x);
            bmax = max(bmax, x);
        }
        ll ansmx = 0;
        ll bmx = 0, y, ans = 0;

        for (ll i = 0; i < a; i++)
        {
            if (b == i)
                break;
            ans += vca[i];
            bmx = max(bmx, vcb[i]);
            y = ans + bmx * (b - i - 1);
            ansmx = max(ansmx, y);
        }

        cout << ansmx << endl;
    }

    return 0;
}
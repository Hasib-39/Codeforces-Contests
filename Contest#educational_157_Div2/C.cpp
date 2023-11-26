#include <bits/stdc++.h>
#include <map>
using namespace std;
#define ll long long int
#define hlw                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
bool myComp(string &a, string &b)
{
    return a.size() < b.size();
}
void solve()
{
    ll n;
    cin >> n;
    vector<string> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), myComp);

    map<pair<ll, ll>, ll> freq;
    ll ans = n;
    for (auto s : arr)
    {
        ll n = s.size();
        for (ll m = 1; m <= n; m++)
        {
            if ((n + m) % 2)
                continue;
            ll mid = (m + n) / 2;
            ll req = 0;
            for (ll i = 0; i < mid; i++)
                req += (s[i] - '0');
            for (ll i = mid; i < n; i++)
                req -= (s[i] - '0');
            if (req >= 0)
                ans += freq[{m, req}];
        }

        reverse(s.begin(), s.end());
        for (ll m = 1; m <= n; m++)
        {
            if ((n + m) % 2)
                continue;
            ll mid = (m + n) / 2;
            ll req = 0;
            for (ll i = 0; i < mid; i++)
                req += (s[i] - '0');
            for (ll i = mid; i < n; i++)
                req -= (s[i] - '0');
            if (req >= 0)
                ans += freq[{m, req}];
        }

        ll sum = 0;
        for (ll i = 0; i < n; i++)
            sum += (s[i] - '0');
        freq[{n, sum}]++;
    }

    cout << ans << endl;
}
int main()
{
    hlw;
    solve();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int pro = 1;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
        pro *= a[i];
    }

    if (2023 % pro == 0)
    {
        cout << "YES" << endl;
        for (int i = 0; i < k - 1; i++)
        {
            cout << 1 << " ";
        }
        cout << 2023 / pro << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
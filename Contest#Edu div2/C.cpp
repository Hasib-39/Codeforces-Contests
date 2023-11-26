#include <bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mx = 0, mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
        }

        int op = 0;
        while (mx != mn)
        {
            mx = (mx + mn) / 2;
            op++;
        }
        cout << op << endl;
        if (op <= n)
        {
            for (int i = 1; i <= op; i++)
            {
                cout << mn << " ";
            }
            cout << endl;
        }
    }
}
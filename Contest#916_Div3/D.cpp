#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> va(n), vb(n), vc(n);
        for (int i = 0; i < n; i++)
        {
            cin >> va[i].first;
            va[i].second = i;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> vb[i].first;
            vb[i].second = i;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> vc[i].first;
            vc[i].second = i;
        }

        sort(va.rbegin(), va.rend());
        sort(vb.rbegin(), vb.rend());
        sort(vc.rbegin(), vc.rend());

        int ans = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (va[i].second != vb[j].second && vb[j].second != vc[k].second && va[i].second != vc[k].second)
                        ans = max(ans, (va[i].first + vb[j].first + vc[k].first));
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
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
        string a, b;
        cin >> a >> b;
        int nsame = 0;
        int z1 = 0, o1 = 0, z2 = 0, o2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == '0')
                z1++;
            else
                o1++;
        }

        for (int i = 0; i < n; i++)
        {
            if (b[i] == '0')
                z2++;
            else
                o2++;
        }
        int ans = 0;
        if (z2 >= z1)
        {
            ans += (z2 - z1);
            for (int i = 0; i < n; i++)
            {
                if (b[i] == '1' && a[i] == '0')
                {
                    ans++;
                }
            }
        }
        else
        {
            ans += (o2 - o1);
            for (int i = 0; i < n; i++)
            {
                if (b[i] == '0' && a[i] == '1')
                {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
}

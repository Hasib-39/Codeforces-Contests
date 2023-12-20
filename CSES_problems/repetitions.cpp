#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int mx = 1;
    int cn_mx = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            cn_mx++;
            mx = max(mx, cn_mx);
        }
        else
        {
            mx = max(mx, cn_mx);
            cn_mx = 1;
        }
    }

    cout << mx;
    return 0;
}
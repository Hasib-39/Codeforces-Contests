#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < x; i++)
        {
            mp[s[i]]++;
        }
        int cnt = 0;
        for (auto it : mp)
        {
            if (it.second >= (it.first - 'A' + 1))
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
}
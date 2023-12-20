#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<pair<char, int>> alpha;
    for (int i = 0; i < 26; i++)
    {
        alpha.push_back(make_pair('A' + i, 0));
    }

    for (int i = 0; i < n; i++)
    {
        alpha[s[i] - 'A'].second++;
    }
    int odd = 0;
    for (auto it : alpha)
    {
        if (it.second % 2 == 1)
        {
            odd++;
        }
    }

    if (odd > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    // Find the character with an odd count and make all others even
    string ans = "";
    for (auto it : alpha)
    {
        if (it.second % 2)
        {
            ans += string(it.second, it.first);
        }
    }
    for (auto it : alpha)
    {
        if (it.second % 2 == 0)
        {
            ans = string(((it.second) / 2), it.first) + ans + string(((it.second) / 2), it.first);
        }
    }

    cout << ans;
    return 0;
}
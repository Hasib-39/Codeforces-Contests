#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> sk;
        int dot = 0;
        int flag = 1;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '.')
            {
                sk.push('.');
                dot++;
            }
            else
            {
                int x = sk.size();
                if (x > 2)
                {
                    flag = 0;
                    if (x % 2)
                    {
                        x++;
                        cnt += x / 2;
                    }
                    else
                    {
                        cnt += x / 2;
                    }
                    while (!sk.empty())
                    {
                        sk.pop();
                    }
                }
            }
        }

        if (flag)
            cout << dot << endl;
        else
            cout << cnt << endl;
    }
}
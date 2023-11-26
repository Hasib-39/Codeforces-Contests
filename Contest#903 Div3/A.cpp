#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    string a, b;
    while (t--)
    {
        int n, m;
        cin >> n >> n;
        cin >> a;
        cin >> b;
        int x = 6;
        int res = 0;
        bool flag = false;
        while (x--)
        {
            if (a.find(b) != string::npos)
            {
                flag = true;
                break;
            }
            res++;
            a += a;
        }
        if (flag)
        {
            cout << res << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
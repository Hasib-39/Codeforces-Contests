#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    if (n % 4 == 1 || n % 4 == 2)
        cout << "NO";
    else
    {
        cout << "YES" << endl;
        if (n % 4 == 0)
        {
            cout << n / 2 << endl;
            for (int i = 1; i < n; i += 4)
            {
                cout << i << " " << i + 3 << " ";
            }
            cout << endl;
            cout << n / 2 << endl;
            for (int i = 2; i < n; i += 4)
            {
                cout << i << " " << i + 1 << " ";
            }
        }
        else
        {
            cout << n / 2 + 1 << endl;
            cout << 1 << " " << 2 << " ";
            for (int i = 4; i < n; i += 4)
            {
                cout << i << " " << i + 3 << " ";
            }
            cout << endl;
            cout << n / 2 << endl;
            cout << 3 << " ";
            for (int i = 5; i < n; i += 4)
            {
                cout << i << " " << i + 1 << " ";
            }
        }
    }
}
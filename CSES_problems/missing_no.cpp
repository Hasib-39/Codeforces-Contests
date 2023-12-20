#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll sum = 0;
    ll x;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        sum += x;
    }

    cout << n * (n + 1) / 2 - sum << endl;
    return 0;
}
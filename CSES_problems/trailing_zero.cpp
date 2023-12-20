#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 5;
    int ans = 0;
    while (n >= x)
    {
        ans += n / x;
        x *= 5;
    }
    cout << ans << endl;
    return 0;
}
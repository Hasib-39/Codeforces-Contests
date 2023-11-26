#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        if (y > x && (y - x) == k)
            cout << y << endl;

        else if (y < x)
            cout << x << endl;
        else if (y > x && (y - x) > k)
            cout << 2 * y - x - k << endl;
        ;
    }
}
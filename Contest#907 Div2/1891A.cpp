#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool pos = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (__builtin_popcount(i + 1) != 1)
            {
                if (arr[i] > arr[i + 1])
                    pos = false;
            }
        }

        cout << (pos ? "YES" : "NO");
        cout << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = abs(arr[n - 1] - x) * 2;
        int val = arr[0] - 0;
        ans = max(ans, val);
        for (int i = 1; i < n; i++)
        {
            val = arr[i] - arr[i - 1];
            ans = max(ans, val);
        }

        cout << ans << endl;
    }
}
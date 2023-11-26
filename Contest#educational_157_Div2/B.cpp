#include <bits/stdc++.h>
using namespace std;
int arr[210];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < (2 * n); i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + (2 * n));

        vector<pair<int, int>> pair;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            pair.push_back(make_pair(arr[2 * n - i - 1], arr[i]));
        }
        for (int i = 0; i < n - 1; i++)
        {
            cnt += abs(pair[i].first - pair[i + 1].first);
            cnt += abs(pair[i].second - pair[i + 1].second);
        }
        cout << cnt << endl;
        for (int i = 0; i < n; i++)
        {
            cout << pair[i].first << " " << pair[i].second << endl;
        }
    }
    return 0;
}
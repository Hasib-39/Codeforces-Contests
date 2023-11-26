#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll N;
char arr[1010][1010];

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> N;
        for (ll i = 0; i < N; i++)
        {
            for (ll j = 0; j < N; j++)
            {
                cin >> arr[i][j];
            }
        }

        ll cnt = 0;

        for (ll i = 0; i < (N / 2); i++)
        {
            for (ll j = 0; j < (N / 2); j++)
            {
                vector<ll> res;
                res.push_back(arr[i][j] - 'a');
                res.push_back(arr[j][N - 1 - i] - 'a');
                res.push_back(arr[N - 1 - i][N - 1 - j] - 'a');
                res.push_back(arr[N - 1 - j][i] - 'a');

                sort(res.begin(), res.end());

                for (ll k = 0; k < 3; k++)
                {
                    cnt += res[3] - res[k];
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
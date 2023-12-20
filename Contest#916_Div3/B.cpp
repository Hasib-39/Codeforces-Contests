#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        vector<int> vc;
        int n = a;
        while (n--)
        {
            vc.push_back(n + 1);
        }
        if (b <= (a / 2))
        {
            int i = 0;
            while (b--)
            {
                swap(vc[i], vc[i + 1]);
                i += 2;
            }
        }
        else
        {
            auto first = vc.begin();
            auto last = vc.begin() + b + 1;
            reverse(first, last);
        }

        for (int i = 0; i < a; i++)
        {
            cout << vc[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

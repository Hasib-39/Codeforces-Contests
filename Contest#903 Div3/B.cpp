#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        bool flag = false;
        for (int i = 0; i <= 3; i++)
        {
            for (int j = 0; j <= 3; j++)
            {
                for (int k = 0; k <= 3; k++)
                {
                    if (i + j + k > 3)
                        continue;

                    int moda = a % (i + 1);
                    int modb = b % (j + 1);
                    int modc = c % (k + 1);

                    int diva = a / (i + 1);
                    int divb = b / (j + 1);
                    int divc = c / (k + 1);

                    if (moda == 0 && modb == 0 && modc == 0 && diva == divb && divb == divc)
                    {
                        flag = true;
                        cout << moda << " " << moda << " " << modc << " " << diva << " " << divb << " " << divc << " " << endl;
                    }
                }
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
#include <iostream>
#include <string>
using namespace std;

int min_water_fill(string s, int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {

        if (s[i] == '.')
        {
            if (i + 1 < n && s[i + 1] == '.')
            {
                s[i] = s[i + 1] = 'w';
                res += 2;
                i++;
            }
            if (i - 1 >= 0 && s[i - 1] == 'w')
            {
                s[i] = 'w';
                s[i - 1] = '.';
            }
            else
            {
                s[i] = 'w';
                res++;
            }
        }
    }
    return res;
}

void print_output(string s, int n)
{
    int ans = min_water_fill(s, n);
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        print_output(s, n);
    }
    return 0;
}
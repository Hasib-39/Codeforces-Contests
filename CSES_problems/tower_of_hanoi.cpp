#include <bits/stdc++.h>
using namespace std;
void toh(int n, int src, int des, int aux)
{
    if (n == 0)
        return;
    toh(n - 1, src, aux, des);
    cout << src << " " << des << endl;
    toh(n - 1, aux, des, src);
}
int main()
{
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << endl;
    toh(n, 1, 3, 2);
}
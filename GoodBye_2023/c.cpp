#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> a;
    int x;
    cin >> x;
    a.push_back(x); 
    for(int i = 1; i < n; i++){
        cin >> x;
        a.push_back(x+a[i-1]);
    }
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
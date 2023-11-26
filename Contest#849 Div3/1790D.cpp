#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
int arr[200005];
void solve(){
    map <int,int> m;
    int n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    sort(arr+1,arr+n+1);
    for(int i=1;i<=n;i++){
        while(m[arr[i]]){
            m[arr[i]]--;
            int j=arr[i]+1;
            while(m[j]) m[j]--,j++;
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main() {
   int t;
   cin>>t;
   while(t--){
    solve();
   }
   return 0;
}


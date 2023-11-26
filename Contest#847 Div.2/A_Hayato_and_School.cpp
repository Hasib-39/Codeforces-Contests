#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> odd,even;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x%2)
            odd.push_back(i);
        else
            even.push_back(i);
    }
    if(odd.size()>=3){
        cout<<"YES\n";
        cout<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<endl;
    }
    else if(even.size()>=2 && odd.size()>=1){
        cout<<"YES\n";
        cout<<even[0]<<" "<<even[1]<<" "<<odd[0]<<endl;
    }
    else
        cout<<"NO\n";
    return;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
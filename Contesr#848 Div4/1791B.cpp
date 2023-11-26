#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        int x=0,y=0,z=0;
        for(int i=0;i<n;i++){
            cin>>c;
            if(c=='U') y++;
            else if(c=='D') y--;
            else if(c=='L') x--;
            else if(c=='R') x++;
            if(x==1 && y==1) z=1;
        }
        if(z) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
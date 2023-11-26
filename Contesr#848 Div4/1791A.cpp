#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char c;
        cin>>c;
        int x=0;
        char a[20]="codeforces";
        for(int i=0;a[i]!='\0';i++){
            if(a[i]==c){
                cout<<"YES\n";
                x=1;
                break;
            }
        }
        if(x==0) cout<<"NO\n";
    }
    return 0;
}
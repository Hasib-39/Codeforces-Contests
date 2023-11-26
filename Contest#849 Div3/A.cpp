#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string x="3141592653589793238462643383279";
    cin>>t;
    while(t--){
        string s;
        int cnt=0;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]==x[i]) cnt++;
            else break;
        }
        cout<<cnt<<endl;
    }
}

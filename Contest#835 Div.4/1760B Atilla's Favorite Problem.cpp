#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    char g;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        g=s[0];
        for(int i=1;i<n;i++){
            if(s[i]>g)
                g=s[i];
        }
        cout<<(g-'a')+1<<endl;
    }
    return 0;
}

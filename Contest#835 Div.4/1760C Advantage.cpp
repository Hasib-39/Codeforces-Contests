#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n;
    long long int s[10000000],b[10000000];
    cin>>t;
    while(t--){
       cin>>n;
       for(int i=0;i<n;i++){
        cin>>s[i];
        b[i]=s[i];
       }
        sort(b,b + n,greater<int>());
        for(int i=0;i<n;i++){
            if(s[i]!=b[0]){
                cout<<s[i]-b[0]<<" ";
            }
            else if(s[i]==b[0]){
                cout<<b[0]-b[1]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

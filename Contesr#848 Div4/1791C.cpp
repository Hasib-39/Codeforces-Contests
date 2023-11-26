#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0,j=n-1;
        while(5){
            if(s[i]!=s[j]){
                i++;
                j--;
            }
            else 
                break;
        }
        if(j>=i)
            cout<<j-i+1<<endl;
        else if(j<i)
            cout<<0<<endl;
    }
    return 0;
}
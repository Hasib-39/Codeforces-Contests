#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,x=0;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int n;
        cin>>n;
        if(n==1||n==2)
            cout<<0<<endl;
        else if(n%2==0)
            cout<<n/2-1<<endl;
        else
            cout<<n/2<<endl;
    }
    return 0;
}

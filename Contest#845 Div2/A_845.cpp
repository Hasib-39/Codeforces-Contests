#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0,i,j;
        cin>>n;
        int arr[n];
        int brr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==1)brr[i]=1;
            else brr[i]=0;
        }
        for(int i=0;i+1<n;i++){
            count+=(!((brr[i]^brr[i+1])&1));
        }
        cout<<count<<endl;
    }
    return 0;
}

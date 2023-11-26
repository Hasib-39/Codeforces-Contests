#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0,ans=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2==1 && arr[i+1]%2==1){
                count++;
            }
            if(arr[i]%2==0 && arr[i+1]%2==0){
                count++;
            }
            ans+=count;
            if ((arr[i]%2)==1 && (arr[i+1]%2)==0){
                count=0;
            }
            if((arr[i]%2)==0 && (arr[i+1]%2)==1){
                count=0;
            }

        }
        cout<<ans<<endl;
    }

    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,g,l;
    cin>>t;
    while(t--){
        int arr[3];
        for(int j=0;j<3;j++){
            cin>>arr[j];
        }
        g=arr[0];
        if(arr[1]>g)
            g=arr[1];
        if(arr[2]>g)
            g=arr[2];
        l=arr[0];
        if(arr[1]<l)
            l=arr[1];
        if(arr[2]<l)
            l=arr[2];
        for(int i=0;i<3;i++){
            if(arr[i]!=g && arr[i]!=l){
                cout<<arr[i]<<endl;
                break;
            }
        }
    }
    return 0;
}

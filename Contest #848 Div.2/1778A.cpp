#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==-1 && arr[i+1]==-1){
                sum+=4;
                flag=1;
                break;
            }
        }
        if(flag=0){
            for(int i=0;i<n-1;i++){
                if((arr[i]==1 && arr[i+1]==-1)||(arr[i]==-1 && arr[i+1]==1)){
                    flag=1;
                    break;
                }
            }
        }
        if(flag=0){
             for(int i=0;i<n-1;i++){
                if(arr[i]==1 && arr[i+1]==1){
                    flag=1;
                    sum-=4;
                    break;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}

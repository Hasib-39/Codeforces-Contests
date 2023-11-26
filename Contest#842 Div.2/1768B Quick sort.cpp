#include<iostream>
using namespace std;
int main(){
    int t,count=0;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        for(int i=0;i<a;i++){
            for(int j=i+1;j<a;j++){
                int temp;
                if(arr[j]<arr[i]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

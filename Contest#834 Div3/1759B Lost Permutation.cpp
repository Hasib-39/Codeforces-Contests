#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,j;
    cin>>t;
    for(int i=0;i<t;i++){
        int m,s,arr[100],n,sum,diff,xsum=0;
        cin>>m>>s;
        for(int i=0;i<m;i++){
            cin>>arr[i];
            xsum+=arr[i];
        }
        sort(arr,arr+m,greater<int>());
        n=arr[0];
        sum=(n*(n+1))/2;
        diff=s-(sum-xsum);
        if(diff<0){
            cout<<"NO"<<endl;
            xsum=0;
            continue;
        }
        else{
            diff+=sum;
            int i=1;
            while(i++){
                j=(i*(i+1))/2;
                if(j==diff){
                    cout<<"YES"<<endl;
                    break;
                }
                else if(j>diff){
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        xsum=0;
    }
}

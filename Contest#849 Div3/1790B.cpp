#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,r;
        cin>>n>>s>>r;
        vector<int> xc(n-1);
        vector<int> xc1;
        xc.push_back(s-r);
        int f=s-r;
        for(int i=0;i<n-1;i++){
            xc[i]=1;
            r--;
        }
        int i=0;
        while(r!=0){
            if(xc[i]<f){
                xc[i]++;
                r--;
            }
            else i++;
        }
        sort(xc.begin(),xc.end());
        for(int i=0;i<xc.size();i++){
            cout<<xc[i]<<" ";
        }
    }
    return 0;
}

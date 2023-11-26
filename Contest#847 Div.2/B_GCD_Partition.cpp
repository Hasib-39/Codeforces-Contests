#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        long long r=accumulate(arr.begin(),arr.end(),0ll), curr=0;
        long long answer=1;
        for(int i=0;i<n-1;i++){
            curr+= arr[i];
            r-=arr[i];
            answer = max(answer, __gcd(r,curr));
        }
        cout<< answer << endl;
    }
}
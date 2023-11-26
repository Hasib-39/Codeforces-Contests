#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}
int main(){
    int t;
    cin>>t;
    string arr;
    string brr="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    for(int i=0;i<t;i++){
        int res;
        cin>>arr;
        res=isSubstring(arr,brr);
        if(res==-1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int a, b, c;
    cin >>a>>b>>c ;
    if((c%2)){
      if(a == b || a > b) cout<<"First"<<endl;
      else {
        cout << "Second" << endl;
      }
    }
    else{
      if(a == b || b > a) cout<<"Second"<<endl;
      else {
        cout << "First" << endl;
      }
    }
    
  }
}
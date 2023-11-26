#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n,m,d;
    cin>>n>>m>>d;
    int no = 1, min = 0;
    int seller[m+1];
    for(int i = 1; i <= m; i++){
      int x;
      cin >> x;
      seller[x] = 1;
    }

    for(int i = 1; i <= n; i++){
      if(seller[i]!=1)
        seller[i] = 0;
    }
    int dc = 0;
    for(int i = 1;i <= n;i++){
      dc++;
      if(dc == d){
        no++;
        continue;
      }
      else if(seller[i]==1){
        no++;
      }
    }

    cout << no << endl;

  }
}
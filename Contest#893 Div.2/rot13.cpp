#include<iostream>
#include<string>
using namespace std;

int main(){
  char a[200],b[200];
  cin >> a;
  for(int i = 0; a[i]!= '\0';i++){
    b[i] = a[i] + 13;
  }

  cout << b << endl;

}
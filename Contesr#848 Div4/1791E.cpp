#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,m,t,p,x,s,sum;
	cin>>t;
	while(t--){
	
		cin>>n;
		p=1e9+5;
		sum=s=0;
		while(n--)
		{
			cin>>x;
			if(x<0)
				s++;
			p=min(p,abs(x));
			sum+=abs(x);
		}
		if(s%2==0)
			cout<<sum<<endl;
		else
			cout<<sum-p*2<<endl;
	}
	return 0;
}
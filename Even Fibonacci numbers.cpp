#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n = 4000000;
int main(){
	ll s = 2,a=1,b=2,c=0;
	for(ll i=0;i<n;i++){
		c = a+b;
		if(c>n)break;
		if(c&1)s += c;
		a = b;
		b = c;
	}
	cout<<s;
}

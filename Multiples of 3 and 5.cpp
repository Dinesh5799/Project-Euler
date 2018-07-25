#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n = 1000;
int main(){
	ll s = 0;
	for(ll i=3;i<n;i++){
		if(i%3 == 0)s += i;
		if(i%5 == 0)s += i;
		if(i%15 == 0)s -= i;
	}
	cout<<s;
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int k,n,w,net_cost,borrow;
	cin>>k>>n>>w;
	net_cost = (w*(w+1)*k)/2;
	if(net_cost<n){ cout<<0; return 0;}
	borrow = net_cost-n;
	cout<<borrow;
	

}
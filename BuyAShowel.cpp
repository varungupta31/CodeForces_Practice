#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,r;
	cin>>k>>r;
	int i=1;
	int val;
	bool flag=true;
	while(flag){
		val = k*i;
		if(val%10==0 || val%10==r){
			flag=false;
		}
		else{
			i++;
		}
	}
	cout<<i;
}
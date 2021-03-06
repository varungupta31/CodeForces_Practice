#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int diff=b-a;

		if(diff==0){
			cout<<0<<'\n';
		}
		else if(diff>0){
			if(diff%2==0){
				cout<<2<<'\n';
			}
			else{
				cout<<1<<'\n';
			}

		}
		else if(diff<0){
			if(diff%2==0){
				cout<<1<<'\n';
			}
			else {
				cout<<2<<'\n';

		}
			}

		
		
		
}}
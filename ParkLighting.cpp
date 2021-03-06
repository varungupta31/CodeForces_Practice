#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int temp = n*m;
		if(temp%2==0){
			cout<<temp/2<<'\n';
		}
		else{
			cout<<(temp+1)/2<<'\n';
		}
}
}
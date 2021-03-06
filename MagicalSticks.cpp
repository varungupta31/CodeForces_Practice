#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;

		long long int sum = (n*(n+1)/2);
		
		if(n%2==0){
			cout<<(sum/(n+1));
		}
		else if(n%2!=0 || n==1){
			cout<<(sum/(n));
		}
		cout<<'\n';
	}
}
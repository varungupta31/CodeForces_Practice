#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> temp;
		for(int i=1;i<=n;++i){
			temp.push_back(i);
		}
		if(n%2==0){
			for(int i=0;i<n/2;++i){
				int a = temp[i];
				temp[i] = temp[n-i-1];
				temp[n-i-1] = a;
			}
			for(int i=0;i<n;++i){
				cout<<temp[i]<<" ";
			} cout<<'\n';
			continue;
		}
		else{
			for(int i=0;i<n/2;++i){
				int a = temp[i];
				temp[i] = temp[n-i-1];
				temp[n-i-1] = a;
			}
			int a = temp[n/2];
			temp[n/2] = temp[n-1];
			temp[n-1] = a;

			for(int i=0;i<n;++i){
				cout<<temp[i]<<" ";
			} cout<<'\n';
			continue;

		}
		

		
		
	}
}
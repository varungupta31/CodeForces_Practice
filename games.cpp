#include<bits/stdc++.h>
using namespace std;

int main(){
	//home - home, guest - gest 
	//if color of gues matches their home then guest.
	//n teams with n(n-1) games.
	int n,count = 0;
	cin>>n;
	vector<int> home;
	vector<int> guest;
	for(int i=0;i<n;++i){
		int a,b;
		cin>>a>>b;
		home.push_back(a);
		guest.push_back(b);
	}

	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(i!=j){
				if(home[i]==guest[j]){
					count++;
				}
			}
		}
	}
	cout<<count;
	return 0;

}
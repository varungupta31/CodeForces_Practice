#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> ans;
		int pwr=1;
		while(n){
			if(n%10){
				ans.push_back((n%10)*pwr);
			}
			n/=10; 
			pwr*=10;
		}
		cout << ans.size() << endl;
		for (auto number : ans) cout << number << " ";
		cout << endl;
	}

	
}
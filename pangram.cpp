#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n<26){
		cout<<"NO";
		return 0;
	}
	string s;
	cin>>s;

	transform(s.begin(),s.end(),s.begin(), ::toupper);
	set<char> mySet;
	for(int i=0;i<n;++i){
		mySet.insert(s[i]);
	}

	if(mySet.size()==26){
		cout<<"YES";
		return 0;
	}
	else{
		cout<<"NO";
		return 0;
	}

	// for(auto it=mySet.begin();it!=mySet.end();it++){
	// 	cout<<*it<<" ";
	// }



	
}
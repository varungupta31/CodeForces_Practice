#include<bits/stdc++.h>

using namespace std;

int main(){
	string s,t;
	int i;
	cin>>s;
	cin>> t;
	if(s.length()!=t.length()){
		cout<<"NO";
		return 0;
	}	
	for(i=0;i<s.length();++i){
		if(s[i]==t[t.length()-1-i]){
			continue;
		}
		else{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0; 
}
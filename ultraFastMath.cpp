#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	string res;
	for(int i=0;i<s1.length();++i){
		if(s1[i]!=s2[i]){
			res.append("1");
		}
		else{
			res.append("0");
		}
	}
	cout<<res;
}
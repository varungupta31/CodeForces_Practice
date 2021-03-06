#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int n,i,count=0;
	cin>>n;
	string s,s2;
	s = to_string(n);
	for(i=0;i<s.length();++i){
		if(s[i]=='4' || s[i]=='7'){
			count++;
		}
	}
	
	s2 = to_string(count);
	bool flag=true;
	for(i=0;i<s2.length();++i){
		if(s2[i]=='4' || s2[i]=='7'){
			continue;
		}
		else{
			flag=false;
		}
	}
	if(flag){
		cout<<"YES";
		return 0;
	}
	else{
		cout<<"NO";
		return 0;
	}


}
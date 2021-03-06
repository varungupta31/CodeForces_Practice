#include<bits/stdc++.h>

using namespace std;

int main(){
	//make upper or lowercase depending on count.
	//if same then make lowercase.
	string s;
	int i,lc=0,uc=0;
	cin>>s;

	for(i=0;i<s.length();++i){
		if(isupper(s[i])){
			uc++;
		}
		else{
			lc++;
		}
	}
	if(lc>=uc){
		transform(s.begin(),s.end(), s.begin(), ::tolower);
		cout<<s;
		return 0;
	}
	else{
		transform(s.begin(),s.end(),s.begin(), ::toupper);
		cout<<s;
		return 0;

	}
}
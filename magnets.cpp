#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;++i){
		string temp;
		cin>>temp;
		s.append(temp);
	}
	int group=0;
	for(int i=0;i<s.length()-1;++i){

		if(s[i]==s[i+1]){
			group++;
		}

	}
	cout<<group+1;
	return 0;
}
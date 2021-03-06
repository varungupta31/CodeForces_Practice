#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	//cout<<s<<endl;
	map<char, int> freq;
	for(int i=0;i<s.length();++i){
		if(s[i]==' '||s[i]=='{'||s[i]=='}' ||s[i]==','){
			continue;
		} else{


			if(freq.count(s[i])==0){
				freq.insert({s[i],1});
			}
			else{
				freq[s[i]]++;
			}}
	}
	cout<<freq.size();
	return 0;


	
}
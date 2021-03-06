#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	map<char,int> freq;
	int n = s.length(),i;
	for(i=0;i<n;++i){
		if(freq.count(s[i])>=1){
			freq[s[i]]+=1;
		}
		else{
			freq[s[i]]=1;
		}
	}
	if(freq.size()%2!=0){
		//odd
		cout<<"IGNORE HIM!";
	}
	else{
		cout<<"CHAT WITH HER!";
	}


}
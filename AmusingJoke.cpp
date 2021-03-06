#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	map<char, int> freq;
	for(int i=0;i<s1.length();++i){
		if(freq.count(s1[i])==0){
			freq.insert({s1[i],1});
		}
		else{
			freq[s1[i]]++;
		}
	}
	for(int i=0;i<s2.length();++i){
		if(freq.count(s2[i])==0){
			freq.insert({s2[i],1});
		}
		else{
			freq[s2[i]]++;
		}
	}

	map<char,int> res;
	for(int i=0;i<s3.length();++i){
		if(res.count(s3[i])==0){
			res.insert({s3[i],1});
		}
		else{
			res[s3[i]]++;
		}
	}

	if(freq==res){
		cout<<"YES";
		return 0;
	}
	else{
		cout<<"NO";
		return 0;
	}


}
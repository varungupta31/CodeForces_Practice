#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<char>> chars;
	for(int i=0;i<n;++i){
		vector<char> temp;
		for(int j=0;j<m;++j){
			char s;
			cin>>s;
			temp.push_back(s);
		}
		chars.push_back(temp);
	}
	bool flag=true;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(chars[i][j]=='C' || chars[i][j]=='Y'||chars[i][j]=='M'){
				flag=false;
			}
		}
	}
	if(!flag){
		cout<<"#Color";
	}
	else{
		cout<<"#Black&White";
	}
}
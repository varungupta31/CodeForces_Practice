#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int n,i,x;
	x=0;
	string s;
	cin>>n;
	vector<string> line;
	for(i=0;i<n;++i){
		cin>>s;
		line.push_back(s);
	}
	for(i=0;i<n;++i){
		string item = line[i];
		if(item=="X++" || item=="++X"){
			x+=1; 
		}
		if(item=="X--" || item=="--X"){
			x-=1;
		}
	}
	cout<<x;
}
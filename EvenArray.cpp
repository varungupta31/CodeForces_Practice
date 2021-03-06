#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	int size;
	vector<int> a,o,e;
	cin>>size;
	for(int i=0;i<size;++i){
		int temp;
		cin>>temp;
		a.push_back(temp);
		if(i%2==0){
			if(temp%2!=0){
				e.push_back(temp);
			}
		}
		else if(i%2!=0){
			if(temp%2==0){
				o.push_back(temp);
			}
		}
	}
	if(e.size()==o.size()){
		cout<<o.size()<<endl;
	}
	else{
		cout<<-1<<endl;
	}


}}
	

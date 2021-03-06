#include<bits/stdc++.h>

using namespace std;

int main(){

	//layers - hate, love, hate, love......
	int n;
	cin>>n;
	vector<string> feel;
	for(int i=1;i<=n;++i){

		if(i%2==0){
			feel.push_back("love");
		}
		else{
			feel.push_back("hate");
		}

	}


	string mid = "that I";
	cout<<"I ";
	for(int i=0;i<feel.size()-1;++i){

		cout<<feel[i]<<" that I ";

	}
	cout<<feel[feel.size()-1]<<" it";
}
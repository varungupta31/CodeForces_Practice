#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int m=0,c=0;
	for(int i=0;i<n;++i){
		int t1,t2;
		cin>>t1>>t2;
		if(t1>t2){ m++;}
		else if(t2>t1) {c++;}

	}
	if(m>c){
		cout<<"Mishka";
	}
	else if(c>m){
		cout<<"Chris";
	}
	else{
		cout<<"Friendship is magic!^^"; 
	}
	return 0;


}
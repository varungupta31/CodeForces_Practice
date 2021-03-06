#include<bits/stdc++.h>
using namespace std;
int steps(int a,int b){
	int diff=abs(b-a);
	if(diff==0){ return 0;}
	else if(diff<=10){ return 1;}
	else{
		if(diff%10==0){return diff/10;}
		else{
			return (diff/10)+1;
		}
	}

}
int main(){
	int t;
	cin>>t;
	while(t){
		int a,b;
		cin>>a>>b;
		cout<<steps(a,b)<<'\n';
		t--;
	}

}
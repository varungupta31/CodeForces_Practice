#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int t=1;//year
	while(pow(3,t)*a<=pow(2,t)*b){
		t++;
	}
	cout<<t;
}
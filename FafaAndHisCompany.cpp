#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count=0;
	for(int i=1;i<=n/2;++i){

		int lead=i;
		int rem = n-i;
		if(rem%lead==0){ count++;}
	}
	cout<<count;
}
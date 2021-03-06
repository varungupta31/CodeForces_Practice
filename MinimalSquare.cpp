#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int a,b;
	cin>>a>>b;
	if(a>b){
		int temp = max(2*b,a);
		cout<<temp*temp<<endl;
	}
	else{
		int temp = max(2*a,b);
		cout<<temp*temp<<endl;
	}
	

}
}
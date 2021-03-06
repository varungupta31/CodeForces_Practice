#include<bits/stdc++.h>
using namespace std;

bool isComposite(int num){
	for(int i=2;i<=num/2;++i){
		if(num%i==0){ return true;}
	}
	return false;
}

int main(){
	int n,b;
	cin>>n;
	for(int i=4; i<n-4;++i){
		b=n-i;
		if(isComposite(i) && isComposite(b)){
			cout<<i<<" "<<b;
			return 0;
		}

	}
	

}
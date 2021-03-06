#include<bits/stdc++.h>
using namespace std;

int main(){
	//a red, b blue.
	//red on left, blue on the right.
	int a,b;
	cin>>a>>b;
	int res1 = min(a,b);
	int res2 = ((a+b)-2*res1)/2;
	cout<<res1<<" "<<res2;
}
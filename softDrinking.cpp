#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int drink = (k*l)/(nl*n);
	int lime = (d*c)/n;
	int salt = p/(n*np);
	
	cout<<min(salt,min(drink,lime));


}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int count=0,temp;
	
	temp = n/100;
	count+=temp;
	n = n%100;

	temp = n/20;
	count+=temp;
	n=n%20;

	temp = n/10;
	count+=temp;
	n=n%10;

	temp = n/5;
	count+=temp;
	n=n%5;

	temp = n/1;
	count+=temp;
	n=n%1;

cout<<count;




}

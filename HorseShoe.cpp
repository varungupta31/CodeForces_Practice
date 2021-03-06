#include<bits/stdc++.h>
using namespace std;


int main(){
	int s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	set<int, greater<int>>mySet;

	mySet.insert(s1);
	mySet.insert(s2);
	mySet.insert(s3);
	mySet.insert(s4);
	cout<< 4-mySet.size();



}
#include<bits/stdc++.h>

using namespace std;

int main(){
	//one tram, n stops from 1 to n.
	//at ith stop ai exit and bi enter.
	// becomes empty at the last step.
	// exit>enter
	int n,i;
	vector<int> enter,exit;
	cin>>n;

	for(i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		exit.push_back(a);
		enter.push_back(b);	
	}
	int max = 0, tot=0;

	for(i=0;i<n;++i){
		tot=(tot-exit[i])+enter[i];
		if(tot>max){ max = tot;}

	}
	cout<<max;
	

}
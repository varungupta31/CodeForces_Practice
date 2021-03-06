#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,count=0,time=0;
	//for solving and Commute he has 4 hours or 240 mins
	cin>>n>>k;
	for(int i=1;i<=n;++i){
		time = time+(5*i);
		if(time+k<=240){ 
			count++;
			continue; 
			 }
		else{ 
			break;
		}
		
	}
	cout<<count;
}
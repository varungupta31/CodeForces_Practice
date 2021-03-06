#include<bits/stdc++.h>

using namespace std;

int main(){
	//elephant at 0, friend at x>0
	// elephant can move 1,2,3,4,5 in 1 step.
	int x,steps=0;
	cin>>x;
	while(x!=0){
		if(x<=5){
			steps++;
			x=0;
		}
		else{
			steps = steps+(x/5);
			x = x%5;
		}
	}
	cout<<steps;
	return 0;
}

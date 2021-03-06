#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,ant=0,dan=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++){
		if(s[i]=='A'){
			ant++;
		}
		else{
			dan++;
		}
	}
	if(ant>dan){
		cout<<"Anton";
		return 0;
	}
	else if(dan>ant){
		cout<<"Danik";
		return 0;
	}
	else{
		cout<<"Friendship";
		return 0;
	}

}
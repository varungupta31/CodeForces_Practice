#include<bits/stdc++.h>
using namespace std;

int main(){
	string cardTable;
	cin>>cardTable;
	vector<string> hand;
	for(int i=0;i<5;++i){
		string temp;
		cin>>temp;
		hand.push_back(temp);
	}
	char suit=cardTable[1];
	char rank = cardTable[0];
	
	for(int i=0;i<5;++i){
		if(hand[i][0]==rank || hand[i][1]==suit){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}

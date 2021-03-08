#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	vector<int> cals = {a,b,c,d};
	string s;
	cin>>s;
	int sum=0;
	for(int i=0;i<s.length();++i){
		sum+=cals[int(s[i])-'0'-1];
	}
	cout<<sum;

}
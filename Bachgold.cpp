#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	cout<<n/2<<endl;
	vector<int> num;
	for(int i=0;i<n/2;++i){
		num.push_back(2);
	}
	if(n%2!=0){
	num[(n/2)-1]=3;}

	for(auto it=num.begin();it!=num.end();++it){
		cout<<*it<<" ";
	}

}
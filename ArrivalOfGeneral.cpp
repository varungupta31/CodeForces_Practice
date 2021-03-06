#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> height;
	for(int i=0;i<n;++i){
		int temp;
		cin>>temp;
		height.push_back(temp);
	}

	auto largest = max_element(height.begin(),height.end());
	
	int l = distance(height.begin(),largest);
	
	
	
	reverse(height.begin(),height.end());
	

	auto smallest = min_element(height.begin(),height.end());
	int s = distance(height.begin(),smallest);
	s = n-s-1;
	if(l>s){
		cout<<l+n-s-2;
	}
	else{cout<<l-1+n-s;}
	



}
#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int t,i;
	cin>>t;
	vector<int> nums;
	for(i=1;i<=t;++i){
		int temp;
		cin>>temp;
		nums.push_back(temp);
	}
	for(i=0;i<t;++i){
		cout<<(nums[i]-1)/2<<'\n';
	}
	return 0;
}
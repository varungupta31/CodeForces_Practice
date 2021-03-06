#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> nums;
	for(int i=0;i<n;++i){
		int temp;
		cin>>temp;
		nums.push_back(temp); 
	}
	int max = *max_element(nums.begin(),nums.end());
	int net =0;
	for(int i=0;i<n;++i){
		int diff = max-nums[i];
		net+=diff;
	}
	cout<<net;
	return 0;
}
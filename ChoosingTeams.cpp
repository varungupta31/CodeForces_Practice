#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k; 
	cin>>n>>k;
	vector<int> nums;
	for(int i=0;i<n;++i){
		int temp;
		cin>>temp;
		nums.push_back(temp);
	}
	int count = 0;
	for(int i=0;i<n;++i){
		if(nums[i]+k<=5){
			count++;
		}
	}
	cout<<count/3;
	return 0;
}
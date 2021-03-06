#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){

		int n;
		cin>>n;
		vector<int> nums;
		for(int i=0;i<n;++i){
			int temp;
			cin>>temp;
			nums.push_back(temp);
		}

		sort(nums.begin(),nums.end());
		int diff=nums[1]-nums[0];

		for(int i=1;i<n-1;++i){
			if(nums[i+1]-nums[i]<diff){
				diff = nums[i+1]-nums[i];
			}
		}
		cout<<diff<<endl;

	}
	return 0;

}
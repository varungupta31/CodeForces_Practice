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
	int net = 0,miss=0;
	for(int i=0;i<n;++i){
		if(nums[i]>0) { net+=nums[i]; continue;}
		if(nums[i]==-1 && nums[i]+net>=0){
			net--;
			continue;
		}
		if(nums[i]==-1 && net==0){
			miss++;
			continue;
		}
	}
	cout<<miss;
}
#include<bits/stdc++.h>
using namespace std;
int main(){

	int t;
	cin>>t;
	while(t--)

	{int x,y,z;
		cin>>x>>y>>z;
		vector<int> nums{x,y,z};
		
		if(x!=y && x!=z && y!=z){
			cout<<"NO"<<'\n';
			continue;
		}
		sort(nums.begin(),nums.end());
	
		if(nums[1]==nums[2]){
			cout<<"YES\n";
			cout<<nums[1]<<" "<<nums[0]<<" "<<1<<'\n';
		}
		else if(nums[0]==nums[1]){
			cout<<"NO\n";
		}}

	

	
}
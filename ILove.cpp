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
	int min=nums[0],max=nums[0],amaz=0;
	for(int i=1;i<n;++i){
		if(nums[i]>max){ 
			max=nums[i];
			amaz++;
		}
		else if(nums[i]<min){
			min=nums[i];
			amaz++;
		}
	}
	cout<<amaz;
}

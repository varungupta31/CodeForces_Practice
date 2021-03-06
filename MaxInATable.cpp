#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<vector<int>> nums(n,vector<int>(n));
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(i==0 || j==0){
				nums[i][j]=1;
			}
			else{
				nums[i][j] = nums[i-1][j]+nums[i][j-1];
			}
			
		} 
	}
	cout<<nums[n-1][n-1];}
	



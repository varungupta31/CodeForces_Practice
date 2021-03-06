#include<bits/stdc++.h>
using namespace std;

void check(int n,vector<int> nums){
	sort(nums.begin(),nums.end());
		
	for(int i=n-2;i>=0;--i){
		if(nums[i+1]-nums[i]<=1){
			nums.erase(nums.begin()+(i+1));
			}
		}
	if(nums.size()==1){ cout<< "YES\n";}
	else{cout<<"NO\n";}
}

int main(){
	//vector<int> nums;
	//int n;
	//cin>>n;
	// for(int i=0;i<n;++i){
	// 	int temp;
	// 	cin>>temp;
	// 	nums.push_back(temp);
	// 	}	
	int t;
	cin>>t;
	while(t){
		int n;
		vector<int> nums;
		cin>>n;

		for(int i=0;i<n;++i){
		int temp;
		cin>>temp;
		nums.push_back(temp);
		}	

		check(n,nums);

		t--;
	}


		
		
	}


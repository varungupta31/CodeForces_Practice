#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>nums;
	for(int i=0;i<n;++i){
		int temp;
		cin>>temp;
		nums.push_back(temp);
	}

	int s=0,d=0,chance=1;
	while(nums.size()){
		int beg=nums[0];
		int end = nums[nums.size()-1];
		if(chance%2!=0){
			//Sereja's turn
			if(beg>end){
				s+=beg;
				nums.erase(nums.begin()+0);
			}
			else{
				s+=end;
				nums.erase(nums.begin()+(nums.size()-1));
			}

		} else{
			//Dima's turn
			if(beg>end){
				d+=beg;
				nums.erase(nums.begin()+0);
			}
			else{
				d+=end;
				nums.erase(nums.begin()+(nums.size()-1));
			}


		}

		
		chance++;

	}

	cout<<s<<" "<<d;



}


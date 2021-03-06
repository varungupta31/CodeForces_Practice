#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	vector<int> nums;
	for(int i=1;i<=n;++i){
		nums.push_back(pow(2,i));
	}

	vector<int> pile1,pile2;
	pile1.push_back(nums[n-1]);
	for(int i=0;i<n/2-1;++i){
		pile1.push_back(nums[i]);
	}
	for(int i=n/2-1;i<n-1;++i){
		pile2.push_back(nums[i]);
	}
	int s1=0,s2=0;
	for(auto it=pile1.begin();it!=pile1.end();++it){
		s1+=*it;
	}
	for(auto it=pile2.begin();it!=pile2.end();++it){
		s2+=*it;
	}
	cout<<abs(s2-s1)<<endl;
	
	}

}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int d1,d2,d3;
	vector<int> nums;
	nums.push_back(abs(b-a)+abs(c-a));
	nums.push_back(abs(b-a)+abs(c-b));
	nums.push_back(abs(c-a)+abs(c-b));

	cout<<*min_element(nums.begin(),nums.end());

	return 0;

}
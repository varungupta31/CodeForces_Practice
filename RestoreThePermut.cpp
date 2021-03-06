#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{vector<int> nums;
		map<int,int> myMap;
		int size;
		cin>>size;
		size*=2;
		while(size--){
			int n;
			cin>>n;
			if(myMap.count(n)==0){
				myMap.insert({n,1});
				nums.push_back(n);
			}
			else{
				continue;
			}
			
		}
	
		for(auto it=nums.begin();it!=nums.end();++it){
			cout<<*it<<" ";
		}
		cout<<'\n';
	}
}
#include<bits/stdc++.h>

using namespace std;

bool isDistinct(string s){
	int n = s.length();
	map<int,int> nums;
	for(int i=0;i<n;++i){
		if(nums.count(s[i])>=1){
			return false;
		}
		else{
			nums.insert(pair<int,int> (s[i],1));
		}

		}
		return true;

}

int main(){
	int given;
	cin>>given;
	bool flag=true;
	while(flag){
		given++;
		if(isDistinct(to_string(given))){
			flag=false;
		}
	}
	cout<<given;
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,h,i;
	cin>>n>>h;
	vector<int> a;
	for(i=0;i<n;++i){
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	int width = 0;
	for(i=0;i<n;++i){
		if(a[i]>h){
			width+=2;
		}
		else{
			width+=1;
		}
	}
	cout<<width;
	return 0;
}
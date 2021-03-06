#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	vector<int>a,b;
	for(int i=0;i<n;++i){
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	for(int i=0;i<n;++i){
		int temp;
		cin>>temp;
		b.push_back(temp);
	}

	int min_a = *min_element(a.begin(),a.end());
	int min_b = *min_element(b.begin(),b.end());
	long long count = 0;

	int diff_a=0,diff_b=0;
	for(int i=0;i<n;++i){
		int diff_a = a[i]-min_a;
		int diff_b = b[i]-min_b;
		count+=max(diff_a,diff_b);
		
	}
	cout<<count<<endl;
}


}
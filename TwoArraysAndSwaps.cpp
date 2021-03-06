#include<bits/stdc++.h>
using namespace std;

int genSum(int n,int k,vector<int>a, vector<int> b){
	sort(a.begin(),a.end());
	sort(b.begin(),b.end(), greater<int>());
	int i=0;
	while(k && i<n){
		if(a[i]<b[i]){
			a[i] = b[i];
			k--;
			i++;
		}
		else{
			i++;
		}
	}
	int sum = 0;
	for(auto it=a.begin();it!=a.end();++it){
		sum+=*it;
	}
	return sum;
}

int main(){
	
	int t,n,k;
	cin>>t;
	while(t){
	cin>>n>>k;
	vector<int> a,b;
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
	cout<<genSum(n,k,a,b)<<'\n';
	t--;
	}

	}


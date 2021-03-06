#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t){
	int n;
	cin>>n;
	int a=n/2;
	vector<int> even;
	vector<int> odd;
	int num=2;

	while(a){
	
		even.push_back(num);
		num+=2;
		a--;
	}
	
	int sum_even = accumulate(even.begin(),even.end(),0);
	a=(n/2)-1;
	num=1;
	while(a){

		odd.push_back(num);
		num+=2;
		a--;
	}
	int sum_odd = accumulate(odd.begin(),odd.end(),0);
	num = sum_even-sum_odd;
	if(num%2!=0){ 
		odd.push_back(num);
		cout<<"YES\n";
		for(auto it=even.begin();it!=even.end();++it){
			cout<<*it<<" ";
		}
		for(auto it=odd.begin();it!=odd.end();++it){
			cout<<*it<<" ";
		} cout<<'\n';
	}
	else{
		cout<<"NO\n";
	}
t--;}

}
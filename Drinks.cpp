#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,temp;
	double sum=0;
	cin>>n;
	vector<int> p;
	for(int i=0;i<n;++i){
		cin>>temp;
		p.push_back(temp);
	}

	for(int i=0;i<n;++i){
		sum=sum+(p[i]/100.0);
	}
	// for(int i=0;i<n;++i){
	// 	cout<<p[i]<<" ";
	// }
	cout<<setprecision(12)<<(sum/n)*100;


}

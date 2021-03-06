#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> p,q;
	for(int i=0;i<n;++i){
		int pi,qi;
		cin>>pi;
		cin>>qi;
		p.push_back(pi);
		q.push_back(qi);

	}
	int count =0; 
	for(int i=0;i<n;++i){
		if(q[i]-p[i]>=2){
			count++;
		}
	}
	cout<<count;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,pn,qn;
	cin>>n;
	vector<int> p,q,res;
	cin>>pn;
	for(int i=0;i<pn;++i){
		int temp;
		cin>>temp;
		p.push_back(temp);
	}
	cin>>qn;
	for(int i=0;i<qn;++i){
		int temp;
		cin>>temp;
		q.push_back(temp);
	}
	for(int i=1;i<=n;++i){
		if(find(p.begin(),p.end(),i) != p.end() || find(q.begin(),q.end(),i) != q.end() ){
			continue;
		}
		else{
			cout<<"Oh, my keyboard!";
			return 0;
		}
	}
	cout<<"I become the guy.";
	return 0;
		 

}
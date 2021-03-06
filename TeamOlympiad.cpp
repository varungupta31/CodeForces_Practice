#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c_1=0,c_2=0,c_3=0;
	cin>>n;
	vector<int> nums,S1,S2,S3;
	for(int i=0;i<n;++i){
		int temp;
		cin>>temp;
		if(temp==1){
			c_1++;
			S1.push_back(i+1);
		}
		else if(temp==2){
			c_2++;
			S2.push_back(i+1);
		}
		else if(temp==3){
			c_3++;
			S3.push_back(i+1);
		}

		nums.push_back(temp);
	}

	int w = min({c_1,c_2,c_3});
	cout<<w<<'\n';
	if(w==0){ return 0;}
	
	for(int i=0;i<w;++i){
		cout<<S1[i]<<" "<<S2[i]<<" "<<S3[i]<<'\n';
	}
	return 0;


}
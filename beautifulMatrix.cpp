#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
	vector<vector<int>> matrix;
	int i,j,num,x,y;
	for(i=0;i<5;++i){
		vector<int> temp;
		for(j=0;j<5;++j){
			
			cin>>num;
			temp.push_back(num);
			if(num==1){
				x=i;
				y=j;
			}
		} matrix.push_back(temp);
	}

	int res = abs(2-x)+abs(2-y);
	cout<<res;
	
}
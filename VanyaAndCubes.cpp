#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i=1,sum=0,count=0;
	while(sum<n){
		int temp = (i*(i+1))/2;
		sum+=temp;
		if(sum>n){
			break;
		}
		i++;
		count++;
	}

	cout<<count;
}
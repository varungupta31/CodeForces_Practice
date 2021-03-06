#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	char arr[n][m];
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			arr[i][j]='.';
			}
		}
	for(int i=0;i<n;i+=2){
		for(int j=0;j<m;j++){
			arr[i][j] = '#';
		}
	}

	for(int i=1;i<n;i+=4){
		arr[i][m-1]='#';
		
	}
	for(int i=3;i<n;i+=4){
		arr[i][0]='#';
		
	}

	

	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cout<<arr[i][j];
			} cout<<'\n';
		}



	}

	

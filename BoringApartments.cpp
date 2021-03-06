#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{int n;
		cin>>n;
		int temp = n%10;
		int digit=0;
		int res=0;
		while(n){
			n/=10;
			digit++;
		}
		for(int i=1;i<temp;++i){
			res+=10;
		}
		if(digit==4){res+=10;}
		else if(digit==3){res+=6;}
		else if(digit==2){res+=3;}
		else if(digit==1){res+=1;}
		cout<<res<<'\n';}
}

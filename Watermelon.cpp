#include<iostream>
using namespace std;

int main(){
  int w,i,j;
  cin>>w;
  for(i=1;i<w;++i){
    j = w-i;
    if(i%2==0 && j%2==0){
      cout<<"YES";
      return 0;
    }
  }
  cout<<"NO";
  return 0;


}

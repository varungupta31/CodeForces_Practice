#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,j,i;
  cin>>n;
  vector<vector<int>> given;
  for(i=1;i<=n;++i){
    int a,b,c;
    vector<int> temp;
    cin>>a;
    cin>>b;
    cin>>c;
    temp.push_back(a);
    temp.push_back(b);
    temp.push_back(c);
    given.push_back(temp);
  }
  int res = 0;
  for(i=0;i<given.size();i++){
    int count=0;
    for(j=0;j<3;j++){
      if(given[i][j]==1){
        count++;
      }
    }
    if(count>=2){res++;}
  }
  cout<<res;
}

#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
  int n,k,i;
  cin>>n>>k;
  int k_o = k;
  vector<int> scores;
  for(i=0;i<n;++i){
    int n;
    cin>>n;
    scores.push_back(n);  }

int val = scores[k-1];
int count =0;
for(int i=0;i<scores.size();++i){
  if(scores[i]>=val && scores[i]>0){ count++;}
}
cout<<count;



}

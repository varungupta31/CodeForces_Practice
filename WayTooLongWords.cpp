#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
  vector<string> Words;
  vector<string> Result;
  int n,i;
  cin>>n;
  for(i=0;i<n;++i){
    string s;
    cin>>s;
    Words.push_back(s);
  }
  for(i=0;i<n;++i){
    if(Words[i].size()>10){
      string temp;
      int num = Words[i].size()-2;
      temp.push_back(Words[i][0]);
      temp = temp+to_string(num);
      temp.push_back(Words[i][Words[i].size()-1]);
      Result.push_back(temp);
      continue;

    }
    else{
      Result.push_back(Words[i]);
      continue;
    }
  }
  for(i=0;i<n;++i){
    cout<<Result[i]<<endl;
    }


}

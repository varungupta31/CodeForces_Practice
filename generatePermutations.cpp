#include<bits/stdc++.h>
using namespace std;

void generate_permutations(vector<int>& permutation, vector<int>& elements, 
	vector<bool>& positions){
	if(permutation.size()==elements.size()){
		for(auto& it: permutation)
			cout<<it<<" ";
		cout<<'\n';
	
	} else{
		for(int i=0;i<elements.size();++i){
			if(positions[i])
				continue;
			positions[i]=true;
			permutation.push_back(elements[i]);
			generate_permutations(permutation, elements, positions);
			permutation.pop_back();
			positions[i]=false;
			
			}
		}
	} 

int main(){
	int size, nums;
	cout<<"Size";
	cin>>size;

	vector<int> permutation;
	vector<int> elements;
	vector<bool> positions(size, false);

	for(int i=0;i<size;i++){
		cin>>nums;
		elements.push_back(nums);
	}

	generate_permutations(permutation,elements,positions);
	return 0;

}


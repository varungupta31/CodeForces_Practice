#include<bits/stdc++.h>

using namespace std;

void subsets_rec(vector<int> &nums, int idx, vector<vector<int>> &result){
	//if it the last index then we know the solution i.e. empty set and number itself
	if(idx==nums.size()-1){
	result.push_back({});
	result.push_back({nums[idx]});
}
	else{
		subsets_rec(nums, idx+1, result);
		int n=result.size();
		for(int i=0;i<n;++i){
			vector<int> r = result[i];
			r.push_back(nums[idx]);
			result.push_back(r);
		}

	}}

vector<vector<int>> subsets (vector<int> nums){
	if(nums.empty()) { return {{}}; }
	vector<vector<int>> result;
	subsets_rec(nums,0,result);

	return result;
}

int main(){
	vector<int> given = {4,5,6};
	vector<vector<int>> ans = subsets(given);
	for(int i=0;i<ans.size();++i){
		cout<<'{';
		for(int j=0;j<ans[i].size();++j){
			cout<<ans[i][j]<<',';

		}
		cout<<'}';
		cout<<'\n';
	}
	return 0;
}






























// #include<bits/stdc++.h>

// using namespace std;

// void print_vector(vector<int> arr){
// 	cout<<'{';
// 	for(int i=0;i<arr.size();++i){
// 		cout<<arr[i]<<",";
// 	}
// 	cout<<"}\n";
// }

// void generate_subsets(vector<int> arr, int n, int k){
// 	if(k>n){
// 		print_vector(arr);
// 	}
// 	else{
// 		arr.push_back(k);
// 		generate_subsets(arr,n,k+1);
// 		arr.pop_back();
// 		generate_subsets(arr,n,k+1); 

// 	}
// }

// int main(){
// 	vector<int> arr;
// 	cout<<"Enter the size of the array: \n";
// 	int n;
// 	cin>>n;
// 	cout<<"The subsets are: \n";
// 	int k=1;
// 	generate_subsets(arr,n,k);
// }


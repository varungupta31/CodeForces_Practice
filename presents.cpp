#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, p;
    cin >> n;
    vector<int> nums(n+1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> p;
        nums[p] = i;
    }
    //cout << nums[1];
    for (int i = 1; i <= n; ++i)
    {
        cout << nums[i]<<" ";
    }
    
}
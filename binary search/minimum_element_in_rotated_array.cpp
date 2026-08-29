#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findMinimum(vector<int>& arr){
        int n = arr.size();

        int mini = INT_MAX;

        for(int i=0; i<n; i++){
            mini = min(mini, arr[i]);
        }

        return mini;
    }
};

int main(){
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};

    Solution sol;

    int mini = sol.findMinimum(arr);

    cout << "the minimum number is:" << mini;
}
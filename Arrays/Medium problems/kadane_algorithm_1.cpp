#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findMaxSubarray(vector<int> arr){
        int n = arr.size();
        int maxi = INT_MIN;

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int sum = 0;
                for(int k=i; k<n; k++){
                    sum = sum + arr[k];
                }

                maxi = max(sum, maxi);
            }
        }
        return maxi;
    }
};

int main(){
    Solution sol;
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int res = sol.findMaxSubarray(arr);
    cout << "the largest subarray is " << res << endl;
    return 0;
}
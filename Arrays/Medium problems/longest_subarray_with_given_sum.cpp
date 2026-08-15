#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findLongestSubarray(int a, vector<int> &arr){
        int size = arr.size();
        int maxi = 0;
        for(int i=0; i<size; i++){
            for(int j=i; j<size; j++){
                int currentSum = 0;
                for(int k=i; k<=j; k++){
                    currentSum += arr[k];
                }

                if(currentSum == a){
                    maxi = max(maxi, j-i+1);
                }
            }
        }
        return maxi;
    }


};


int main(){
    vector<int> arr = {-1, 1, 1};
    int a = 2;
    Solution sol;
    int ans = sol.findLongestSubarray(a, arr);

    cout << "the lingest subarray is: " << ans << endl;
    return 0;
}
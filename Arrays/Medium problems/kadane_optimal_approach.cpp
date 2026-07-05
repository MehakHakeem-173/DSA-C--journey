#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:

    //th eoptimal approach see if there comes a negative value then its skip all the previous ones
    //cuz a negative value will even reduce the later positive values even if those can be higher without this -ive impact, 
    
    int findMaxSubarray(vector<int> arr){
        int n = arr.size();

        long long maxi = LONG_MIN;
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];

            if(sum > maxi){
                maxi = sum;
            }

            if(sum < 0){
                sum = 0;
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
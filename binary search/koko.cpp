#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    bool ceilDivision(vector<int>& arr, int divisor, int m){
        long long hours = 0;
        for(int pile: arr){
            hours += (pile + divisor -1)/ divisor;

            if(hours > m){
                return false;
            }
        }

        return hours <= m;
    }

    public:
    int findDivisor(vector<int>& arr, int m){
        int maxi = *max_element(arr.begin(), arr.end());

        for(int i=1; i<=maxi; i++){
            if(ceilDivision(arr, i, m)){
                return i;
            }
        }

        return maxi;
    }
};

int main(){
    vector<int> arr = {3, 5, 6, 8, 11};
    int threshold = 6;

    Solution sol;
    int result = sol.findDivisor(arr, threshold);
    cout << "the minimum divisor is: " << result;
    return 0;
}
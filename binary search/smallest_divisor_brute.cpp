#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    bool isSmallestElement(vector<int>& arr, int divisor, int threshold){
        int total = 0;
        for(int num: arr){
            total += (num + divisor - 1)/divisor;

            if(total > threshold){
                return false;
            }
        }

        return total <= threshold;
    }

    public:
    int smallestDivisor(vector<int> arr, int m){
        int maxvalue = *max_element(arr.begin(), arr.end());

        for(int divisor=1; divisor<=maxvalue; divisor++){
            if(isSmallestElement(arr, m, divisor)){
            return divisor;
            }
        }

        return maxvalue;
    }
};

int main(){
    vector<int> arr = {1, 2, 5, 9};
    int threshold = 6;

    Solution sol;
    cout << sol.smallestDivisor(arr, threshold) << endl;
    return 0;
}
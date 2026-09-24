#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    bool canDivideWithThreshold(vector<int>& arr, int mid, int threshold){

        //if the sum of divisors are greater, return falso so that the next number is checked
        int sum = 0;
        for(int num: arr){
            sum += (num + mid-1)/mid;
            if( sum >   threshold){
                return false;
            }
        }

        //if the sum of divisors is less that threshold, return true and the loop stops in there
        return sum <= threshold;
    }

    public:
    int smallestDivisor(vector<int>& arr, int m){

        //find totalsum and maximum element
        double totalSum = 0;
        int maxi = 0;
        for(int num: arr){
            totalSum += num;
            maxi = max(maxi, num);
        }

        //if threshould is greater that total sum, 1 can do everything
        if(m >= totalSum) return 1;

        //if threshold is equal to the highest element, return the highest
        if(m == static_cast<int>(arr.size())) return maxi;

        int low = 1, high = maxi;
        while(low < high){
            int mid = low + (high - low)/2;
            if(canDivideWithThreshold(arr, mid, m)){
                high = mid;
            }

            else{
                low = mid+1;
            }
        }
    }
};

int main(){
    vector<int> arr = {1, 2, 5, 9};
    int threshold = 6;

    Solution sol;
    cout << sol.smallestDivisor(arr, threshold) << endl;
    return 0;
}
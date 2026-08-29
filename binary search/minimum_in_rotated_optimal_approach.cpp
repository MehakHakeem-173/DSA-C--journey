#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findMinimum(vector<int>& arr){
        int n = arr.size();

        int low = 0; 
        int high = n - 1;

        while(low <= high){
            int mid = (low + high) / 2;

            if(arr[mid] > high){
                low = mid + 1;
            }

            else{
                high = mid;
            }
        }

        return arr[low];
    }
};

int main(){
    vector<int> arr = {3, 4, 5, 6, 1, 2, 3};

    Solution sol;

    int mini = sol.findMinimum(arr);

    cout << "the minimum number is: " << mini;
}
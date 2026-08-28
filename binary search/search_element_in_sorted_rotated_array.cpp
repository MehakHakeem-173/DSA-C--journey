#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findElement(vector<int> arr, int target){

        int n = arr.size();
        int low = 0;
        int high = n - 1;

        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] == target){
            return mid;
            }

            if(arr[low] <= arr[mid]){

            if(arr[low] <= target && target < arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
            else{
                if(arr[mid] < target && target <= arr[high]){
                    low = high + 1;
                }
                else{
                   high = mid - 1;
                }
            }
        }
    }
};

int main(){
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int target = 5;

    Solution sol;

    int index = sol.findElement(arr, target);
    cout << " the element is present at index: " << index << endl; 
}
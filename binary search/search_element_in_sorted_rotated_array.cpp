#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    //function to find the index
    int findElement(vector<int> arr, int target){

        //pointers
        int n = arr.size();
        int low = 0;
        int high = n - 1;

        //base case
        while(low <= high){

            //check if mid is the insex
            int mid = (low + high) / 2;
            if(arr[mid] == target){
            return mid;
            }

            //if first index is lower then the mid
            if(arr[low] <= arr[mid]){

                //and lower than the target also, , and target lies b/w the mid and the first
                //search it in the first half and ignore the second half
            if(arr[low] <= target && target < arr[mid]){
                //it means this part is sorted
                high = mid - 1;
            }
            else{

                //if any condition doesn't follow, search in second half
                low = mid + 1;
            }
        }

        //else if the first index is not lower then the mid, means, the mid is in the rotated part
            else{

                //and mid index is lower than target and target is lower that high also
                if(arr[mid] < target && target <= arr[high]){

                    //we will search in only second part also
                    low = high + 1;
                }

                //if no one follow , we will search in the left half
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
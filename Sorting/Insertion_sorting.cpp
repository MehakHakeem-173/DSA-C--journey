#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
    //function for sorting the array
    vector<int> insertionSort(vector<int>& nums){
        // assigning the size of array to the veriable n
        int n = nums.size();
        for(int i=0;i<n;i++){
            //current element is key
            int key = nums[i];
            int j = i-1;
            //shift the element by one position if they are greater then key
            while(j>=0 && nums[j]>key){
                nums[j+1] = nums[j];
                j--;
            }

            //insert key in correct position
            nums[j+1] = key;
        }

        //return the sorted array
        return nums;
    }
};

int main(){
// class soultion for doing th efunction in
    Solution solution;
//taking the dynamic array for sorting
    vector<int> nums = {43, 54, 23, 32, 12, 7};

    //printing the array before sorting
    cout << "Before using the insertion sort: " << endl;
    for (int num : nums){
        cout << num << " ";
    }
    cout << endl;

    //calling the function for the array
    nums = solution.insertionSort(nums);

    //printing the sorted array
    cout << "after sorting the array: " << endl;
    for (int num : nums ){
        cout << num << " ";
    }
    return 0;
}
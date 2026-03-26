#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
    vector<int> insertionSort(vector<int>& nums){
        int n = nums.size();
        for(int i=0;i<n;i++){
            int key = nums[i];
            int j = i-1;
            while(j>=0 && nums[j]>key){
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = key;
        }
        return nums;
    }
};

int main(){

    Solution solution;

    vector<int> nums = {43, 54, 23, 32, 12, 7};
    cout << "Before using the insertion sort: " << endl;
    for (int num : nums){
        cout << num << " ";
    }
    cout << endl;
    nums = solution.insertionSort(nums);
    cout << "after sorting the array: " << endl;
    for (int num : nums ){
        cout << num << " ";
    }
    return 0;
}
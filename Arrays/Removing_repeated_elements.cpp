#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:

    //function to remove the elements
    int removeDuplicate(vector<int>& nums){

        //it will store the unique elements
        unordered_set<int> seen;

        //index where the next unique element will be stored
        int index = 0;

        //loop to remove the elements
        for (int num : nums){

            //if num is not in the seen, its unique
            if (seen.find(num) == seen.end()){
                
                //insert it in the seen
                seen.insert(num);

                //over write num[index] with this uniqe num
                nums[index] = num;

                // move index to next position
                index++;
            }
        }

        //return the new array
        return index;
    }
};

int main(){
    //array to remove the duplicates from
    vector<int> nums = {1, 1, 2, 2, 3, 4, 5, 5, 6};

    Solution sol;

    //calling the function
    int k = sol.removeDuplicate(nums);

    //printing the modified array
    cout << "k " << k << endl;
    cout << "array after removing duplicates" << endl;
    for (int i=0; i<k; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}
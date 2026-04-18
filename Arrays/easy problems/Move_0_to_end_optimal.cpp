#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void moveZeros(vector<int>& arr){

        //veriable to store 0s
        int j = -1;

        //loop to find first zero and then break
        for (int i=0; i<arr.size(); i++){
            if (arr[i] == 0){
                j=i;
                break;
            }
        }

        //if j remains -1 then there is no zero
        if (j == -1) return;

        //loop to move other zeros
        for(int i=j+1; i<arr.size(); i++){ //start from the index after first zero

            //if a non-zero digit found , swap it with the first zero
            if (arr[i] != 0){
                swap (arr[i], arr[j]);

                //move j to the next index and i kept moving 
                j++;
            }
        }
    }
};

int main(){
    Solution sol;

    //array with elements n
    vector<int> nums = {0, 1, 3, 0, 24, 0, 6};

    //calling the function
    sol.moveZeros(nums);

    //printing the function
    for (int num : nums) {
        cout << num << " ";
    }
    cout <<endl;
    return 0;
}
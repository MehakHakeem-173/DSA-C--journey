#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    //function for moving the zeros
    vector<int> moveZeros(vector<int>& arr){
        vector<int> temp(arr.size()-1, 0);
        //index to store te non-zero elements in 
        int index = 0;

        //loop to move zeros to end
        for (int i=0; i<arr.size(); i++){
            if(arr[i] != 0){
                temp[index] = arr[i];
                index++;
            }
        }

        //asigning the temp back to array, the non-zeros 
        for(int i=0; i<arr.size(); i++){
            arr[i] = temp[i];
        }

        //return the array
        return arr;
    }
};

int main(){

    vector<int> arr = {0, 1, 0, 2, 0, 3};
    Solution sol;
    vector<int> result = sol.moveZeros(arr);
    cout << "array after moving zeros: ";
    for(int num : result){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
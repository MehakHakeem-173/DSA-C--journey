#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:

    //function for rotating the array
    void rotatetheArray(vector<int>& arr){

        //veriable to store the index 0 in
        int temp = arr[0];

        //start loop from one untill array size
        for(int i=1; i<arr.size(); i++){

            //store the value of one index in the one before
            arr[i-1] = arr[i];
        }

        //put the element of ist index in the last
        arr[arr.size()-1] = temp;
    }
};

int main(){
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

    //calling the function
    sol.rotatetheArray(arr);

    //printing the array
    for(int num : arr) {
        cout << num << " ";
    }
}
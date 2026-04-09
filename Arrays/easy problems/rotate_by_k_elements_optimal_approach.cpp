#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    //function to swap the elements
    void reverseArray(vector<int>& arr, int start, int end){

        //base case: if start is less then end
        while (start < end){

            //swapping the elements
            swap(arr[start], arr[end]);

            //increment and decrement for the other elements
            start++;
            end--;
        }
    }

    //function to rotate the array 
    vector<int> rotateArray(vector<int>& arr, int k, string direction){

        //array size
        int n = arr.size();

        //if array or k is equal to zero, return the array
        if ( n == 0 || k == 0){
            return arr;
        }

        //take modulus of k in case k is greater then n
        k = k % n;

        //for right rotating
        if(direction == "right"){

            //rotating the whole array first
            reverseArray(arr, 0, n-1);

            //rotate the first elements up to k to order
            reverseArray(arr, 0, k-1);

            //rotate the other elements after k 
            reverseArray(arr, k, n-1);

            //this approach bring the last elements to the forst, rotation to the right
        }

        //for left rotating
        if(direction == "left"){

            //ist rotate the elements upto k at the beginning
            reverseArray(arr, 0, k-1);

            //now rotate the later elements
            reverseArray(arr, k, n-1);

            //last rotate the whole array
            reverseArray(arr, 0, n-1);

            //this approach move the first elements to the last, left rotating
        }
        return arr;
    }
};
int main(){
    Solution sol;

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;

    //string to find at which direction we are rotating
    string dir = "right";

    //calling the function
    vector<int> result = sol.rotateArray(arr, k, dir);

    //printing the result
    for (int num : result){
        cout << num << " ";
    }
    return 0;

}
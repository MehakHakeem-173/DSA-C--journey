#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    //function to find the target 
    //return string
    string twoSumExist(vector<int> arr, int target){

        //size of array
        int n = arr.size();

        //loop to find the answer
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){

                //if find out - return yes
                if(arr[i] + arr[j] == target){
                    return "YES";
                }
            }
        }

        //if target not made, return no
        return "NO";
    }

    //function to return the two elements
    vector<int> twoSumIndices(vector<int> arr, int target){
        //size of array
        int n = arr.size();

        //loop to make the array
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i] + arr[j] == target){
                    return {i, j};
                }
            }
        }

        //return doule -1 if answer not found
        return {-1, -1};
    }
};

int main (){

    Solution sol;

    //start arry
    vector<int> arr = {2, 6, 5, 8, 12};

    //number we want to find
    int target = 14;
    //calling the function for checking if the sum is possible
    cout << sol.twoSumExist(arr, target) << "\n";

    //calling the function for returning the array
    vector<int> res = sol.twoSumIndices(arr, target);

    //printing the answer array
    cout << "[" << res[0] << ", " << res[1] << "]\n";

    return 0;
}

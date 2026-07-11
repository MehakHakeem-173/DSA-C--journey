#include<bits/stdc++.h>
using namespace std;

//class to find the next permutation
class Solution{
    public:

    vector<int> nextPermitution(vector<int> arr){

        //creating a vector array to store all the permitutions
        vector<vector<int>> all;

        //sort the array so it will be the first permutation
        sort(arr.begin(), arr.end());

        //push all the permutations to all
        do {
            all.push_back(arr);
        }

        //next permutation will push the other permutation to the all
        while(next_permutation(arr.begin(), arr.end()));

        //now move through all, until the current all reach the array we have given
        for(int i=0; i<all.size(); i++){
            if (all[i] == arr){

                //if the array is the last permutation then we will return the first permutation
                if (i == all.size()-1){
                    return all[0];
                }

                //if not then we will return the next one
                return all[i+1];
            }
        }

        //or we will return arr
        return arr;
    }

};

int main(){

    //vector array
    vector<int> arr = {1, 2, 3};

    // creating object for solution
    Solution sol;

    //calling the function
    vector <int> result = sol.nextPermitution(arr);

    //printing the result array
    for(int x : result){
        cout << x << " ";
    }

    return 0;
}
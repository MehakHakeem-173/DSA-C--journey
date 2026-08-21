#include<bits/stdc++.h>
using namespace std;

class Solution{

    public: 
    vector<vector<int>> rotateBy90(vector<vector<int>>& arr){

        //size of array
        int n = arr.size();

        //nested loop to first swap the array
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(arr[i][j], arr[j][i]);
            }
        }

        //loop to reverse the matrix
        //if you write arr.begin() instead of arr[i].begin, it will be anti-clkwise 
        for(int i=0; i<n; i++){
            reverse(arr[i].begin(), arr[i].end());
        }

        return arr;
    }
};

int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution sol;
    sol.rotateBy90(matrix);
    for(auto rows : matrix){
        for(auto val: rows){
            cout << val << " ";
        }

        cout << endl;
    }

    return 0;
}
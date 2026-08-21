#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> rotateBy90(vector<vector<int>>& arr){

        //size of matrix
        int n = arr.size();

        //initiale a matrix to store the rotated matrix in
        vector<vector<int>> rotated(n, vector<int>(n));

        //nested loop to rotate the matrix
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                rotated[j][n-i-1] = arr[i][j];
            }
        }

        //return the matrix
        return rotated;
    }
};

int main(){
    vector<vector<int>> ARR = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution sol;

    vector<vector<int>> rotated = sol.rotateBy90(ARR);

    for(auto row : rotated){
        for(auto val : row){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
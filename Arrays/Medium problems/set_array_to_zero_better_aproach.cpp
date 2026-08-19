#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void setZeros(vector<vector<int>>& arr){

        //size of array
        int m = arr.size();

        //size of row
        int n = arr[0].size();

        //make to arrays of size three with value zeros
        vector<int> row(m, 0);
        vector<int> col(n, 0);

        //traverse throuh the matrix
        for (int i=0; i<m; i++){
            for(int j=0; j<n; j++){

                //if any element is found zero, make that index in the col and row as 1
                if(arr[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
                }
            }
        }


        //traverse through the two arrays and if any index is 1
        //convert that index in the matrix to zero
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(row[i] == 1 || col[j] == 1)
                arr[i][j] = 0;
            }
        }
    }
};

int main(){
    vector<vector<int>> arr = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    Solution sol;

    sol.setZeros(arr);
    for(auto row : arr){
        for(auto val : row){
            cout << val << " ";
        }
        cout << endl;
    }
}
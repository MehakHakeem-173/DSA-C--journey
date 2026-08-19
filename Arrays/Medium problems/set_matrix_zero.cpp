#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
    void setZeros(vector<vector<int>>& matrix){
        //veriable to assign the number of elements, 
        int m = matrix.size();

        //variabe to assign the number of rows
        int n = matrix[0].size();

        //travers through the entire array
        for(int i = 0; i<m; i++){

            //traverse through the rows one by one
            for(int j=0; j<n; j++){

                /*if any zero is found , convert that entire row and column
                 corresponding to the zero into -1, if they are non zeros*/
                if(matrix[i][j] == 0){
                    for(int col = 0; col <n; col++){
                        if(matrix[i][col] != 0)
                        matrix[i][col] = -1;
                    }

                    for(int row =0; row<n; row++){
                        if(matrix[row][j] != 0)
                        matrix[row][j] = -1;
                    }
                }
            }
        }

        //convert all the -1s into zero
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == -1)
                matrix[i][j] = 0;
            }
        }
    }
};

int main(){
    vector<vector<int>> matrix = {{1, 1, 1 }, {1, 0, 1}, {1, 1 ,1}};
    Solution sol;
    sol.setZeros(matrix);

    for(auto row : matrix){
        for(auto val : row){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;

}
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void setZeros(vector<vector<int>>& arr){

        //size of array and first row
    int m = arr.size();
    int n = arr[0].size();

    //flag to tag if forst row and column should be zero
    bool firstRowZeros = false;
    bool firstColZeros = false;

    //check if first row should be zero
    for(int j=0; j<n; j++){
        if(arr[0][j] == 0){
            firstRowZeros = true;
            break;
        }
    }

    //check if first column should be zero
    for (int i=0; i<m; i++){
        if(arr[i][0] == 0)
        firstColZeros = true;
        break;
    }

    //mark rows and columns in first row and colums
    for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            if(arr[i][j] == 0){
                arr[i][0] = 0;
                arr[0][j] = 0;
            }
        }
    }

    //set matrix into sero based on markers
    for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            if(arr[i][0] == 0 || arr[0][j] == 0){
                arr[i][j] = 0;
            }
        }
    }


    //handle first row
    if(firstRowZeros){
        for(int i=0; i<m; i++){
            arr[i][0] = 0;
        }
    }


    //handle first column
    if(firstColZeros){
        for (int j=0; j<n; j++){
            arr [0][j] =0 ;
        }
    }
    }

};

int main(){
    vector<vector<int>> arr = {{1, 1, 1},{1, 0, 1},{1, 1, 1} };

    Solution obj;

    obj.setZeros(arr);

    for(auto row : arr){
        for(auto val: row){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
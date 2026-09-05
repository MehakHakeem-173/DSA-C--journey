#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int noOfRotation(vector<int> arr){
        int n = arr.size();

        for(int i=0; i<n; i++){
            if(arr[i] > arr[i+1]){
                return i+1;
            }
        }

        return 0;
    }
};

int main(){
    vector<int> arr = {3, 4, 5, 6, 1, 2};

    Solution sol;
    int rotation = sol.noOfRotation(arr);

    cout << "the number of rotations are: " << rotation;

    return 0;
}
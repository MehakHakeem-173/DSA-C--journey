#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int noOfRotation(vector<int> arr){
        int n = arr.size();
        int minval = arr[0];
        int minindex = 0;


        for(int i=1; i<n; i++){
            if(arr[i] < minval){
                minval = arr[i];
                minindex = i;
            }
        }

        return minindex;
    }
};

int main(){
    vector<int> arr = {3, 4, 5, 6, 1, 2};

    Solution sol;
    int rotation = sol.noOfRotation(arr);

    cout << "the number of rotations are: " << rotation;

    return 0;
}
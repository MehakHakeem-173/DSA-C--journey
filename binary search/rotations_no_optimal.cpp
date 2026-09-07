#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int noOfRotation(vector<int> arr){
        int n = arr.size();

        int low = 0;
        int high = n - 1;
        while(low < high){
            int mid = (low + high )/ 2;

            if(arr[mid] > arr[high]){
                low = mid + 1;
            }

            else{
                high = mid;
            }
        }

        return low;
    }
};

int main(){
    vector<int> arr = {3, 4, 5, 6, 1, 2};

    Solution sol;
    int rotation = sol.noOfRotation(arr);

    cout << "the number of rotations are: " << rotation;

    return 0;
}
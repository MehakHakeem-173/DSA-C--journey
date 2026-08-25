#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int lastOccurance(vector<int>& arr, int target){

    int n = arr.size();

    int low = 0; 
    int high = n - 1;
    int ans = -1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == target){
            ans = mid;
            low = mid + 1;
        }

        else if ( arr[mid] > target){
            high = low - 1;
        }

        else{
            low = mid + 1;
        }
    }

    return ans;
    }
};

int main(){
    vector<int> arr = {1, 2, 3, 4, 6, 6, 7, 8};
    int target = 6;

    Solution obj;
    int index = obj.lastOccurance(arr, target);

    cout << "the index is: " << index ;
}
#include<bits/stdc++.h>
using namespace std;

class Solution{

    private:
    int findNumber(vector<int> arr, int low, int high, int target){
        if(low > high) return -1;

        int mid = (high + low)/2; 
        if(arr[mid] == target) return mid;

        else if(mid < target){
            findNumber(arr, mid+1, high, target);
        }

        else{
            findNumber(arr, low, mid-1, target);
        }

    }

    public:
    int binarySearch(vector<int> arr, int target){
        return findNumber(arr, 0, arr.size()-1, target);
    }

    
};

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    int target = 6;
    Solution sol;
    int ind = sol.binarySearch(arr, target);

    if(ind == -1) cout << "the number is not found in the array" << endl;
    else cout << "the number is found at index: " << ind << endl;

    return 0;
}
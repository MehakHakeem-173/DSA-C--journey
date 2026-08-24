#include<bits/stdc++.h>
using namespace std;

class Solution{

    public:

    int binarySearch(vector<int> arr, int target){
        int n= arr.size();
        int low = 0; 
        int high = n - 1;
        
        while(low <= high){

            //do as low + (high - low)/2 , without that low at biginning, this will go out of range
            int mid = low + (high - low)/2;
            if(arr[mid] == target) return mid;

            else if(arr[mid] < target) low = mid + 1;
            
            else high = mid - 1;
        }

        return -1;
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
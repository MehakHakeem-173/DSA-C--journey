#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int peakIndex(vector<int> arr){
        int n = arr.size();

        for(int i=0; i<n; i++){
            bool left = ( i == 0) || (arr[i] >= arr[i-1]);
            bool right = (i == n-1) || (arr[i] >= arr[i+1]);

            if(left && right) return i;
        }
        return -1;
    }
};

int main(){
    vector<int> arr = {1, 2, 1, 3, 4, 5, 4, 6};

    Solution sol;
    int peakindex = sol.peakIndex(arr);
    cout << "the peak number is at index: " << peakindex;
}
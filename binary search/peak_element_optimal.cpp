#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int peakIndex(vector<int> arr){
        int n = arr.size();
        int low = 0;
        int high = n-1;
        while(low < high){
            int mid = (low + high) / 2;
            if(arr[mid] > arr[mid+1]){
            high = mid;
        }

        else{
            low = mid + 1;
        }
        }
        return low;
    }
};

int main(){
    vector<int> arr = {1, 2, 1, 3, 4, 5, 4, 6};

    Solution sol;
    int peakindex = sol.peakIndex(arr);
    cout << "the peak number is at index: " << peakindex;
}
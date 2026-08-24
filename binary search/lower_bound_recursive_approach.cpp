#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findLowerBound(vector<int> arr, int x){
        int n = arr.size();

        int low = 0; 
        int high = n - 1;
        int ans = n;
        while(low <= high){
            int mid = (low + high ) / 2;

            if(arr[mid] >= x){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};

int main(){
    vector<int> arr = {1, 2, 5, 7, 8, 9};
    int x = 4;

    Solution sol;
    int answer = sol.findLowerBound (arr, x);
    cout << "the lower bound of this array is: " << answer << endl;
}
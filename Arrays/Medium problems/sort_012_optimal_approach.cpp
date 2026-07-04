#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void sortZeroOneTwo(vector<int>& arr){
        int low = 0, mid = 0, high = arr.size()-1;
        while(mid<=high){
            if(arr[mid] == 0){
                swap(arr[mid], arr[low]);
                mid++;
                low++;
            }

            else if(arr[mid] == 1){
                mid++;
            }

            else{
                swap(arr[mid], arr[high]);
                    high--;
                
            }
        }
    }
};

int main(){
    vector<int> arr = {1, 2, 0, 0, 2, 1, 0, 2};
    
    Solution sol;
    sol.sortZeroOneTwo(arr);
    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}
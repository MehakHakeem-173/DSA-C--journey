#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int findSingleNumber(vector<int>& arr){

        int n = arr.size();
        int low = 0;
        int high = n-1;

        if(n == 1){
            return -1;
        }

        while(low < high){
            int mid = (low + high) / 2;

            if(arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1]){
                return arr[mid];
            }

            //this part simply check if the left side of the mid is balanced then check only the right side
            else if(mid % 2 == 1 && arr[mid] == arr[mid - 1] || 
            mid % 2 == 0 && arr[mid] == arr[mid + 1]){
                low = mid + 1;
            }

            else{
                high = mid - 1;
            }
        }
        return -1;
    }
};
int main(){
    vector<int> arr {1, 1, 2, 2, 3, 3, 4, 5, 5};
    Solution sol;
    
    int number = sol.findSingleNumber(arr);
    cout << "the single number: " << number << endl;
    return 0;
}
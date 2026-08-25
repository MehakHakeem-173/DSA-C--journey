#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int lastOccurance(vector<int>& arr, int target){

    int n = arr.size();

    int ans = -1;
    for(int i = n-1; i>=0; i--){
        if(arr[i] == target){
            ans = i;
            break;

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
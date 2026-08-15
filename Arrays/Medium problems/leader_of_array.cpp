#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> findLeader(vector<int> arr){
        int n = arr.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
           bool leader = true;

           for(int j = i+1; j<n; j++){
            if(arr[j] > arr[i]){
                leader = false;
                break;
            }
           }

           if (leader){
            ans.push_back(arr[i]);
           }
        }

        return ans;
    }
};

int main(){
    vector<int> arr = {3, 4, 7, 2, 6};
    Solution sol;
    vector<int> ans = sol.findLeader(arr);

    for(auto nums : ans){
        cout << nums << " ";
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findMajority(vector<int> arr){
        int n = arr.size();
        unordered_map<int, int> mp;

        for (int num : arr){
            mp[num]++;
        }
        for (auto& pair : mp){
            if(pair.second > n/2){
                return pair.first;
            }
        }
        return -1;
    }
}; 

int main(){
    vector<int> arr = {1, 4, 2, 4, 3, 4, 5, 4};
    Solution sol;
    int ans = sol.findMajority(arr);
    cout << "the majority element in the array is " << ans << endl;
    return 0;
}
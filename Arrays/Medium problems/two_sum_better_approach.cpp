#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    string ifSumExist(vector<int> arr, int target){
        int n = arr.size();
        unordered_map<int, int> mp;

        for(int i=0; i<n; i++){
           int complement = (target - arr[i]);
           //the find return a key in the map, the actual value of the element
           //if it can't find that key then its return mp.end() , mean empty
           //so if anywhere is loop , the arr[i] match the key then its not equal to mp.end() and we return yes
           if (mp.find(complement) != mp.end());{
           return "yes";
        }

        mp[arr[i]] = i;
    }
        return "No";
    }

    vector<int> twoSumIndeces(vector<int> arr, int target){
        int n = arr.size();
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
         int complement = target - arr[i];
         if(mp.find(complement) != mp.end()){
            //map[complement] give index of the other value found
            return {mp[complement], i};
         }

         mp[arr[i]] = i;
        }

        return {-1, -1};
    }
};

int main(){
    Solution sol;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    cout << sol.ifSumExist(arr, target);
    cout << endl;
    vector<int> res = sol.twoSumIndeces(arr, target);
    cout << "[" << res[0] << ", " << res[1] << "]" << endl;
}
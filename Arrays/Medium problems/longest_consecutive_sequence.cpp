#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    bool linearSearch(vector<int>& a, int num){
        for (int i=0; i<a.size(); i++){
            if(a[i] == num)
                return true;
        }

        return false;
    }

    public:

    int longestSequence(vector<int>& nums){
        if(nums.size()== 0)
        return 0;

        int n = nums.size();
        int longest = 1;

        for(int i=0; i<n; i++){
            int x = nums[i];

            int cnt = 1;

            while(linearSearch(nums, x+1) == true){
                x += 1;
                cnt += 1;
            }

            longest = max(longest, cnt);
        }

        return longest;
    }
};

int main(){
    vector<int> arr = {7, 6, 1, 2, 3, 8, 9};
    Solution sol;
    int maxi = sol.longestSequence(arr);
    cout << "maximum sequence of array is: " << maxi;
    return 0;
}
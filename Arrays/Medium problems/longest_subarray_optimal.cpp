#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int longestSubarray(vector<int> nums, int k){
        int n = nums.size();

        int right = 0, left = 0;
        int sum = nums[0];
        int maxlen = 0;

        while(right < n){

            while(left <= right && k < sum){
                sum -= nums[left];
                left++;
            }

            if(sum == k){
                maxlen = max(maxlen, right - left + 1);
            }

            right++;
            if(right < n)
            sum  += nums[right];
        }

        return maxlen;
    }
};

int main() {
	vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    
	// Creating an object of Solution class
	Solution sol;

	/* Function call to find the length
	of longest subarray having sum k */
	int ans = sol.longestSubarray(nums, k);

	cout << "The length of longest subarray having sum k is: " << ans;

	return 0;
}
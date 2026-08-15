#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int longestSubarray(vector<int> nums, int k){
        int n = nums.size();

        int right = 0, left = 0;
        int sum = nums[0];
        int maxlen = 0;

        //keep going until n
        while(right < n){

            //keep going until the left is less than right or sum exced the required number
            while(left <= right && k < sum){
                //then remove the current value of index of left and move the left forward
                sum -= nums[left];
                left++;
            }

            //if summ is equal to k then the maxlen is the one maximum between the earler one or that one of right-left+1
            if(sum == k){
                maxlen = max(maxlen, right - left + 1);
            }

            //move the left forward for the next iteration until it reach n and add the value of current index to the sum
            right++;
            if(right < n)
            sum  += nums[right];
        }

        //return the maximum length found so far
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
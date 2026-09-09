#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findSquare(int n){

        int low = 1;
        int high = n/2;
        int ans = 0;

        while(low <= high){
            long long mid = low + (high - low) / 2;

            if(mid * mid <= n){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return ans;
    }
};

int main(){
    int n = 40;
    Solution sol;
    int answer = sol.findSquare(n);
    cout << "the squareroot is: " << answer;
    return 0;
}
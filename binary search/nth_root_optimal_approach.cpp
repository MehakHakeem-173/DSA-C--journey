#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findNthRoot(int n, int m){
        int low = 1;
        int high = m;

        while(low <= high){
            int mid = (low + high) / 2;
            long long ans = 1;
            for(int i=0; i<n; i++){
                ans *= mid;
                if(ans > m) break;
            }

            if(ans == m) return mid;

            if(ans < m){
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
    int n = 4;
    int m = 81;

    Solution sol;
    int root = sol.findNthRoot(n, m);
    cout << "the " << n << " root of the number " << m << "is " << root;
}
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int findSingleNumber(vector<int>& arr){

        int n = arr.size();

        int ans = 0;

        for(int i=0; i<n; i++){
            ans = ans ^ arr[i];
        }

        return ans;
    }
};
int main(){
    vector<int> arr {1, 1, 2, 2, 3, 3, 4, 5, 5};
    Solution sol;
    
    int number = sol.findSingleNumber(arr);
    cout << "the single number: " << number << endl;
    return 0;
}
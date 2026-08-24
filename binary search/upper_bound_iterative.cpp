#include<bits/stdc++.h>
using namespace std;


//lower bound: to return the first index come whose value is greater that to the number given
class Solution{
    public:
    int findLowerBound(vector<int> arr, int x){
        int n = arr.size()-1;

        for(int i=0; i<=n; i++){
            if(arr[i] > x){
                return i;
            }
        }

        return n;
    }
};

int main(){
    vector<int> arr = {1, 2, 4, 7, 8, 9};
    int x = 4;

    Solution sol;
    int answer = sol.findLowerBound (arr, x);
    cout << "the lower bound of this array is: " << answer << endl;
}
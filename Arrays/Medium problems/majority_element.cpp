#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findMajority(vector<int> arr){
        int n = arr.size();

        int count = 0;
        for(int i=0; i<n; i++){

            for(int j=i+1; j<n; j++){

                if(arr[i] == arr[j]){
                    count++;
                }
            }
        
        if(count > n/2){
            return arr[i];
        }
    }
    }
};

int main(){
    vector<int> arr = {1, 4, 2, 4, 3, 4, 4, 3, 4};
    Solution sol;
    int res = sol.findMajority(arr);
    cout << "the majority element is " << res << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    //function to find the single nan-repeating element using a hash array
    int getsingleElement(vector<int>& arr){
        int n = arr.size();

        //step 1: find the maximum value in the array
        int maxi = arr[0];
        for(int i=0; i<n; i++){
            maxi = max(maxi, arr[i]);
        }

        //step 2: declare and initalize hash array of size maxi+1
        vector<int> hash(maxi+1, 0);

        //step 3: count the frequency of each number
        for(int i=0; i<n; i++){
            hash[arr[i]]++;
        }

        //step 4: find the element that occurs exactly once
        for (int i=0; i<n; i++){
            if(hash[arr[i]] == 1)
            return arr[i];
        }
        return -1; //fallback, shouldn't occur invalid input
    }
};

int main(){
    vector<int> arr = {4, 1, 2, 1, 2};
    Solution sol;
    int ans = sol.getsingleElement(arr);
    cout << "the single element is: " << ans << endl;
    return 0;
}
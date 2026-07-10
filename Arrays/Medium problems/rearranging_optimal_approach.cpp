#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //function to arrang the array
    vector<int> arrangArray(vector<int>& arr, int n){
        
        //vector array to store the updated elemnets in
        vector<int> ans (n,0);

        //variables to start the +ive and -ive elements from
        int pos = 0;
        int neg = 1;

        for(int i=0; i<n; i++){

            //if array is -ive, place it on index 1 and increnment the neg 2 times
            if (arr[i] < 0){
                ans[neg] = arr[i];
                neg += 2;
            }

            //or if array is +ive, place it on index 0, and increment the pos two times
            else{
                ans[pos] = arr[i];
                pos += 2;
            }
        }

        //return the new array
        return ans;
    }
};

int main(){
    vector<int> arr = {1, 2 , -4 , -5, 4};
    int n = arr.size();
    Solution obj;
    vector<int> result = obj.arrangArray(arr, n);
    for(int num : result){
        cout << num << " ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findMajority(vector<int> arr){
        int n = arr.size();

        //the Moore's voting algorithm
        int count = 0; 
        int ele;
        for(int i=0; i<n; i++){
            if(count == 0){
                count = 1;
                ele = arr[i];
            }
            else if(ele == arr[i]){
                count++;
            }
            else{
                count--;
            }
        }

        //so this code actually decrement the count everytime another element come
        // so in the end when all get cancelled the majority remains cuz its greater then half the array
        int cnt1 = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == ele){
                cnt1++;
            }
        }

        if(cnt1 > n/2){
            return ele;
        }

        return -1;
    }
};

int main(){
    vector<int> arr = {1, 4, 2, 4, 3, 4, 4};
    Solution sol;
    int ans = sol.findMajority(arr);
    cout << "the majority element of this array is " << ans << endl;
    return 0;

}
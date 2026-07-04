#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    void sortZersOnesTwo(vector<int>& arr){

        //initiate variables to store the number of 0s, 1s, and 2s
        int count0 = 0, count1 = 0, count2 = 0;

        //count the number of each digit
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == 0){
                count0++;
            }
            else if(arr[i] == 1){
                count1++;
            }
            else{
                count2++;
            }
        }

        int index = 0;

        //now print the digits in sorted form
        while(count0--){
            arr[index++] = 0;
        }
        while(count1--){
            arr[index++] = 1;
        }
        while(count2--){
            arr[index++] = 2;
        }
    }
};

int main(){
    vector<int> arr = {1, 0, 2, 1, 0, 2, 1};
    Solution sol;

    //call the function
    sol.sortZersOnesTwo(arr);

    //print the answer
    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}
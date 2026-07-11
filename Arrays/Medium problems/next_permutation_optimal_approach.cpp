#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void nextpermutation(vector<int>& arr){
        int index = -1;
        for(int i = arr.size()-2; i>=0; i--){
            if(arr[i] < arr[i+1]){
                index = i;
                break;
            }
        }
            if(index == -1){
                reverse(arr.begin(), arr.end());
                return;
            }

            for(int i = arr.size()-1; i>index; i--){
                if(arr[i] > arr[index]){
                    swap(arr[i], arr[index]);
                    break;
                }
            }
            reverse(arr.begin() + index + 1, arr.end());
        }
    
};

int main(){
    vector<int> arr = {1, 2, 3};

    Solution sol;

    sol.nextpermutation(arr);

    for(int num : arr){
        cout << num << " ";
    }

    return 0;
}
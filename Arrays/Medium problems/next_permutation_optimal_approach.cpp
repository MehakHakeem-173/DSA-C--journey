#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    //pass the array by reference
    void nextpermutation(vector<int>& arr){
        //variable to start the permutation from
        int index = -1;

        //start from the second-last index so that to compare it to the last index later
        for(int i = arr.size()-2; i>=0; i--){

            //if index i is less than the next one then permutation is possible
            if(arr[i] < arr[i+1]){

                //index will be update from -1 to i and break
                index = i;
                break;
            }
        }
        //if there was no permutation possible, reverse the whole array and return it
            if(index == -1){
                reverse(arr.begin(), arr.end());
                return;
            }

            //or loop from end to the index and if i is greater then index
            for(int i = arr.size()-1; i>index; i--){
                if(arr[i] > arr[index]){

                    //swap i and index to form the next permutation and break the loop
                    swap(arr[i], arr[index]);
                    break;
                }
            }

            //reverse the array from the element next to index to the end 
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
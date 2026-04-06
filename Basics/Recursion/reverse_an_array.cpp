#include<bits/stdc++.h>
using namespace std;

//function for reversing the reversing the array
vector<int> reverseArray(vector<int>& nums){

    //size of array
    int n = nums.size();

    //array to store the reversed elements in
    vector<int> arr(n);

    //loop for reversing the nuber
    for (int i=0; i<n; i++){
        arr[i] = nums[n-1-i];
    }
    return arr;
}

int main (){

    //array before reversing
    vector<int> arr = {5, 4, 3, 2, 1};

    //printing the unreversed array
    cout << "array before reversing: ";
    for (int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //declearing the reverse array to a vector ans
    vector<int> ans = reverseArray(arr);
    cout << "reverse array: ";
    for(int num : ans){
    cout << num << " ";
    }
    cout << endl;
}
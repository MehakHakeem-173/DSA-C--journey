#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int>& arr){
    sort(arr.begin(), arr.end());

    return arr[arr.size() - 1];
}

int main(){
    vector<int> arr1 = {4, 5, 6, 2, 7};
    vector<int> arr2 = {3, 2, 7, 9, 8};

    cout << " the largest element in arr1 is : " << sortArr(arr1) << endl;
    cout << "the largest element in arr2 is : " << sortArr(arr2) << endl;
}
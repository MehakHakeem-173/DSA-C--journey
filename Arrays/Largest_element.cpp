#include<bits/stdc++.h>
using namespace std;


//function for finding the largest elemen
int sortArr(vector<int>& arr){

    //sorting the array for getting the largest element
    sort(arr.begin(), arr.end());

    //returning the largest element
    return arr[arr.size() - 1];
}

int main(){

    //vector array for sorting
    vector<int> arr1 = {4, 5, 6, 2, 7};
    vector<int> arr2 = {3, 2, 7, 9, 8};

    //printing the largest element
    cout << " the largest element in arr1 is : " << sortArr(arr1) << endl;
    cout << "the largest element in arr2 is : " << sortArr(arr2) << endl;
}
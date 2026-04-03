#include<bits/stdc++.h>
using namespace std;

//function to remove the duplicates
int removeDuplicate(vector<int>& arr){

    //if array is empty , return 0
    if(arr.empty()) return 0;

    //pointer for the position of last unigue element
    int i = 0;

    //loop to find the unique elements
    for(int j=1; j<arr.size(); j++){
        if(arr[j] != arr[i]){
        i++;
        arr[i] = arr[j];
        }
    }
    //returning the value
    return i+1;
}
int main(){
    //array to remove elements from
    vector<int> arr = {4, 4, 5, 5, 6, 6, 7};
    
    //call the function
    int k = removeDuplicate(arr);

    //writting the number of unique element
    cout << "unique number are : " << k << endl;

    //printing the numbers
    cout << "array after removing duplicates: " << endl;
    for (int i=0; i<k; i++)
    cout << arr[i] << " ";
}
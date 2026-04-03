#include<bits/stdc++.h>
using namespace std;


//function for sorting array
void getElement(int arr[], int n){

    //if array is of 0 or 1 element 
    //print -1 in both places
    if(n == 0 || n == 1){
        cout << -1 << " " << -1 << endl;
    }

    //sort the array to find the elements
    sort(arr, arr + n);

    //veriables to store the required elements in
    int small = arr[1];
    int large = arr[n-2];

    //printing th eelements
    cout << "second smallest element is : " << small << endl;
    cout << "second largest element is : " << large << endl;
}

int main(){
    //array to find the element for
    int arr[] = {3, 5, 7, 2, 9, 4};
    //size of array
    int n = sizeof(arr) / sizeof(arr[0]);
    //calling the function
    getElement(arr, n);
    return 0;
}
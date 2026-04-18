#include<bits/stdc++.h>
using namespace std;

//function to find the number
int search(int arr[], int n, int num){
    int i;

    //loop to find the number
    for(i=0; i<n; i++){
        if (arr[i] == num){
            return i;
        }
    }

    //if number doesn't found , return -1
    return -1;
}

int main (){

    //array to find the number in
    int arr[] = { 1, 2, 4, 3, 5, 6, 7, 8};

    //size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    //number to find
    int num = 4;

    //calling the function
    int val = search(arr, n, num);

    //printing the value
    cout << val <<endl;
}
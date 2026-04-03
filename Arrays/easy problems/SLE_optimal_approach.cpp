#include<bits/stdc++.h>
using namespace std;


//function to find the second small element
int secondSmallest(int arr[], int n){

    //if array size is less then 2 elements, return -1
    if (n < 2)
    return -1;

    //initializing variables to store second-largest value
    int small = INT_MAX;
    int second_small = INT_MAX;

    //loop for finding the second small
    for (int i = 0; i < n; i++){
        //if the current index is less then small, 
        //small become second small and array i become small
        if (arr[i] < small){
            second_small = small;
            small = arr[i];
        }

        //any itteration in which if the index element is
        //less then the previous one and not equal to the smallest
        //the index array is second small
        else if (arr[i] < second_small && arr[i] != small){
                second_small = arr[i];
        }

    } 

    //return second small
    return second_small;
}


//function to find the second large
int secondLargest(int arr[], int n){

    //if array size is less then 2, return -1
    if (n < 2) 
    return -1;

    //variables to store the large and second large
    int large = INT_MIN;
    int second_large = INT_MIN;


    //loop to find the second large value
    for(int i=0; i < n; i++){

        //if the current index is greater then the large, 
        //the large become second large and i become large
        if(arr[i] > large){
            second_large = large;
            large = arr[i];
        }

        //this apply to the later itterations

        //if the current index is greater then second large
        //but not equal to small, second large becomes i
        else if(arr[i] > second_large && arr[i] != large){
            second_large = arr[i];
        }
    }
    //return second large value
    return second_large;
}

int main (){
    //initialize the array with elements
    int arr[] = {5, 7, 3, 8, 2};

    //size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    //calling the functions and assigning their values to variables
    int sS = secondSmallest(arr, n);
    int sL = secondLargest(arr, n);

    //printing the results
    cout << "the second largest: " << sL << endl;
    cout << "the second smallest: " << sS << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;


//function for finding the largest number
int findLargestElement(int arr[], int n){
    //assumeing maximum as the first index
    int max = arr[0];

    //loop to find another meximum number
    for(int i=1;i<n;i++){

        //if another maximum number found, update max with that
        if(max < arr[i])
        max = arr[i];
    }

    //return the greatest element
    return max;
}

int main(){

    //array 1 for finding largest element
    int arr1[] = {4, 6, 7, 3, 8, };

    //size of array
    int n = 5;

    //printing largest number
    int max = findLargestElement(arr1, n);
    cout << "the largest element in arr1 is : " << max << endl;

    int arr2[] = {6, 7, 4, 2, 3};
    n = 5;
    max = findLargestElement(arr2, n);
    cout << "the largest element in arr2 is : " << max << endl;
    return 0;
}
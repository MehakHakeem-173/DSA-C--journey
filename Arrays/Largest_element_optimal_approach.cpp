#include<bits/stdc++.h>
using namespace std;

int findLargestElement(int arr[], int n){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(max < arr[i])
        max = arr[i];
    }
    return max;
}

int main(){
    int arr1[] = {4, 6, 7, 3, 8, };
    int n = 5;
    int max = findLargestElement(arr1, n);
    cout << "the largest element in arr1 is : " << max << endl;

    int arr2[] = {6, 7, 4, 2, 3};
    n = 5;
    max = findLargestElement(arr2, n);
    cout << "the largest element in arr2 is : " << max << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;


//function for sorting the array
void Bubble_sort(int arr[], int n){

    //base-case for recursion
    if (n == 1)
    return;

    //integer to count the number of swaps
    int didSwap = 0;
    //perform to sort the array: pushing the largest to the end
    for(int j=0; j<=n-2;j++){

        //swapping the numbers
        if (arr[j] > arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;

            //increment the swap if the number swaps
            didSwap = 1;
        }

        //if the number of swaps are equal to zero
        //return cuz the array is already sorted
        if (didSwap == 0) 
        return;
        //calling the function again
        Bubble_sort(arr, n-1);
    }
}

int main(){

    //input array
    int arr [] = {2, 5, 3, 7, 1, 6};
    
    //determining the size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    //printing the array before sorting
    cout << "array before sorting: " << endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //calling th efunction
    Bubble_sort(arr, n);

    //printing the array after sorting
    cout << " after sorting array: " << endl;
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}
#include<bits/stdc++.h>
using namespace std;
/*In insertion sort, the array is divided into a 
sorted left part and an unsorted right part. At each step, 
one element from the unsorted part is picked and 
inserted into its correct position in the sorted part 
by shifting elements if necessary.*/


//function for sorting the array
void Insertion_sort(int arr[], int i, int n){

    //base-case for recursion
    if (i == n)
    return;

    int j = i;

        //swapping the numbers
        while ( j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }

    Insertion_sort(arr, i+1, n);
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
    Insertion_sort(arr, 0, n);

    //printing the array after sorting
    cout << " after sorting array: " << endl;
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}
#include<iostream>
using namespace std;

//function for sorting the array
void selection_sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        //assume that the current index hold the minimum value
        int mini = i;

        //if j is less then the index array, make that the minimum
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                //update the mini if the smaller number is found
            mini = j;
            }
        }
    
        //swap the found minimum with the first element of the sorted array
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
    }

    // print the sorted array
    cout<<"after selection sorting: "<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    //size of array
    int arr[] = {13, 46, 56, 45, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    //print array before sorting
    cout<<"before selection sorting: "<<endl;
    //loop for printing array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    //calling the sorted array
        selection_sort(arr, n);
}
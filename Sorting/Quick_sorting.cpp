#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    //function for sorting the array
    void quickSort(vector<int>& arr, int low, int high){

        //base-case only sort if there are at least 2 element
        if(low < high){

            //finding the pivot index
            int pivotIndex = Partition(arr, 0, high);

            //sorting the array at the left of pivot
            quickSort(arr, low, pivotIndex-1);

            //sorting array at the right of piovet
            quickSort(arr, pivotIndex+1, high);
        }
    }

    //function for finding the pivot
    int Partition(vector<int>& arr, int low, int high){

        //getting a piovet
        int pivot = arr[high];

        //index at which we will place the index <= to pivot
        int i = low - 1;

        //loop for finding <= piovet
        for (int j=low;j<high;j++){

            //if value less then piovet is found increment the value of i
            if(arr[j] <= pivot){
                i++;

                //swap i with j
                swap(arr[i], arr[j]);
            }
        }

        //when all the loops go run then i+1 will be te spot after the last lesser value found
        //all the values after that will be greater then pivot
        //or will be the pivot index itself if pivot is the greatest in the array
        //so swap it with i+1 means place it at 0 index
        swap(arr[i+1], arr[high]);

        //return the value of pivot
        return i+1;
    }
};

int main(){
    //get the vector array
    vector<int> arr = {4, 6, 7, 3, 5, 2, 8};

    cout<<"array before quick sorting: " << endl;
    for(int num : arr){
    cout << num << " ";
    }
    cout<<endl;

    cout << " array after sorting : " << endl;
    Solution sol;
    //calling the function inside the solution
    sol.quickSort(arr, 0, arr.size() - 1);

    //printing the array
    for (int num : arr)
    cout << num << " ";
}
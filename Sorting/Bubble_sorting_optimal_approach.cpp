#include<bits/stdc++.h>
using namespace std;

class BubbleSort{
    public:
//function for sorting the array
    void Bubble_Sort(vector<int>& arr){
     int n = arr.size();

     //nested loop to itterate over the array
     for (int i=n-1;i>=0;i--){
        int didSwap = 0;
        for (int j=0;j<=i-1;j++){
            //swap the values if the later one is lower
            if (arr[j] > arr[j+1]){
                swap ( arr[j], arr [j+1]);
                didSwap = 1;
            }
        }

        //if no swap occurs in first go, break out the for loop cuz the zrrzy is already sorted
            if(didSwap == 0){
                break;
            }
        
     }

     //printing array after sorting
     cout << "after sorting using bubble sorting \n";
     for (int num : arr){
        cout << num << " ";
     }
     cout << endl;
    }     
};

int main(){
    // enter the dynamic array (vector)
    vector<int> arr = {35, 65, 32, 23, 9, 12};
    
    //printing array before sorting
    cout << "before using bubble sorting \n";
    for ( int num : arr){
        cout << num << " ";
    }

    //end of arry
    cout << endl;

    //making a class BubbleSort
    BubbleSort sorter;

    //calling the function inside the BubbleSort
    sorter.Bubble_Sort(arr);
    return 0;
}
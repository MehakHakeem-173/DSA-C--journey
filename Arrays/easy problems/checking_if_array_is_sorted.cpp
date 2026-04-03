#include<bits/stdc++.h>
using namespace std;


//function for checking the array
bool isSorted(int arr[], int n){
    
    //loop to find if the array is sorted
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i])
            return false;
        }
    }
    return true;
}

int main(){
    //starting array
    int arr[] = {1, 2, 3, 4, 5, 6, 7}, n = 7;
    //calling the function
    bool ans  = isSorted(arr, n);
    
    //printin the answer
    if (ans) cout << "true" << endl;
    else cout << "false" << endl;
}
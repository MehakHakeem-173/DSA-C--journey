#include<bits/stdc++.h>
using namespace std;

//function to find frequency
void countFreq(int arr[], int n){

    //creat a visited array to mark elements that are already processed
    vector<bool> visited(n, false);

    //loop to travers all elements of array
    for (int i=0; i<n; i++){

        //skip if the element is already processed
        if(visited[i] == true){
            continue;
        }

        //cout the frequency of element
        int count = 1;
        for (int j=i+1; j<n; j++){

            //
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }

        cout << arr[i] << " " << count << endl;
    }
}

int main(){

    //input array
    int arr[] = {10, 5, 10, 15, 10, 5};

    //size of arry
    int n = sizeof(arr) / sizeof(arr[0]);


    //callingthe function
    countFreq(arr, n);
    return 0;
}
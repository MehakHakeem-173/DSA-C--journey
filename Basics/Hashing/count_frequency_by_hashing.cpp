#include<bits/stdc++.h>
using namespace std;

//function to count frequency
void countFreq(int arr[], int n){

    //map, first int is for key, the second is for value
    //key is the number, value is the frequency
    unordered_map<int, int> map;

    //loop to find the frequency
    for (int i=0; i<n; i++){

        //this line separately count the frequency of different element in its own category for every iteration
        map[arr[i]]++;
    }

    //auto -> compiler find the type of data
    //x is each item in the map
    for (auto x : map){

        //our map is a pair so x.first is the first value of pair(key) , 
        //x.second is the second value of pair (value)
        cout << x.first << " " << x.second << endl;
    }
}

int main(){
    //arry to process
    int arr[] = {10, 5, 10, 15, 10, 5};

    //size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    //calling the function
    countFreq(arr, n);
    return 0;
}
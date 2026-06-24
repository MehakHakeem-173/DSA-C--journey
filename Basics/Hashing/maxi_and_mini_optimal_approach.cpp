#include<bits/stdc++.h>
using namespace std;

//function for finding the frequency
void countFreq(int arr[], int n){

    //array to store the counted elements
    vector<bool> visited(n, false);

    //declearing hashmap
    unordered_map<int, int> hash;

    //variables to store the required values in
    int maxfreq = 0, minfreq = n;
    int maxele = 0, minele = 0;

    //loop to count the frequency through hashing
    for (int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    //declearing the values in variables
    for(auto it : hash){
        int element = it.first;
        int frequency = it.second;

        //finging minimum element and frequency
        if(frequency < minfreq){
            minfreq = frequency;
            minele = element;
        }

        //finding maximum element and frequecy
        if(frequency > maxfreq){
            maxfreq = frequency;
            maxele = element;
        }
    }
       //printing the result
        cout << "minimum frequency is " << minfreq <<" of element " << minele << endl;
        cout << "maximum frequency is " << maxfreq <<" of element " << maxele << endl;
    
}

int main (){

    //arry to count frequency for
    int arr[] = {10, 5, 10, 15, 10, 5};

    //size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    //calling the function
    countFreq(arr, n);
    return 0;
}
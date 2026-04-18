#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    //function to find the union
    vector<int> findUnion(int arr1[], int arr2[], int n1, int n2){

        //map to store all the unique values with its frequency
        map<int, int> freq;

        //vector to store the union in
        vector<int> Union;

        //loop through first array
        for (int i=0; i<n1; i++){
            freq[arr1[i]]++;
        }

        //loop through second array
        for (int i=0; i<n2; i++){
            freq[arr2[i]]++;
        }

        //taking all the keys from the freq map
        for(auto &it : freq){
            Union.push_back(it.first);
        }

        //returning the union
        return Union;
    }
};

int main(){

    //size of array 1
    int n1 = 6; 

    //size of array 2
    int n2 = 8;

    //array 1
    int arr1[] = {1, 2, 3, 4, 4, 5};

    //array 2
    int arr2[] = {5, 5, 6, 7, 8, 8, 9, 10};

    Solution obj;

    //calling the function inside the class solution
    vector<int> Union = obj.findUnion(arr1, arr2, n1, n2);
    cout << endl << " union of array1 and array2 is " << endl;

    //printing the array
    for (auto &val : Union){
        cout << val << " ";
    }
    cout << endl;
}
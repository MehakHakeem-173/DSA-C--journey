#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    //function to make the union
    vector<int> FindUnion(int arr1[], int arr2[], int n1, int n2){

        //in c++ , set is the number of elements which doesn't store the duplicates
        set<int> st;

        //loop to store array one in set
        for (int i=0; i<n1; i++){
            st.insert(arr1[i]);
        }

        //loop to store array 2 in set
        for (int i=0; i<n2; i++){
            st.insert(arr2[i]);
        }

        //converting set into array
        vector<int> unionArr (st.begin(), st.end());

        //return the array
        return unionArr;
    }
};

int main(){

    //arrays to form union of
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[] = {5, 6, 6, 7, 8, 9, 9};

    //size of arrays
    int n = 8, m = 7;

    Solution obj;

    //calling the function
    vector<int> Union = obj.FindUnion(arr1, arr2, n, m);

    //printing the union
    cout << endl << "union of array one and array 2 :" << endl;
    for (int val : Union){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int findMissingNo(vector<int> arr){
    int n = arr.size();
    vector<int> hash(n+1 , 0);
    for(int i=0; i<n-1; i++){
        hash[arr[i]]++;
    }

    for (int i=1; i<=n; i++){
        if (hash[i] == 0){
            return i;
        }
    }
    return -1;
}

int main (){
    vector<int> arr = {3, 2, 1, 5, 4, 7, 8};
    cout << findMissingNo(arr);
    return 0;
}
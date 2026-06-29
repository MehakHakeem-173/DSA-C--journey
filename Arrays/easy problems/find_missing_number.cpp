#include<iostream>
#include<vector>
using namespace std;

int findMissingNo(vector<int> arr){
    int n = arr.size();
    for(int i=1; i<=n; i++){

        bool found = false;

        for(int j=0; j<n; j++){
            if (arr[j] == i){
                found = true;
                break;
            }
        }
        if (!found){
            return i;
        }
    }

    return -1;
}

int main(){
    vector<int> arr = {3, 2, 1, 4, 5, 8, 7};
    cout << findMissingNo(arr);
    return 0;
}
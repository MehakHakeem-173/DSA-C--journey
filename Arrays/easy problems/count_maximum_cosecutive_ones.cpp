#include<bits/stdc++.h>
using namespace std;

//function to find the maximum
int findOnes(vector<int> arr){

    //ariable to store the no. of consecutive 1's
    int cnt = 0;

    //variable to store the maximum value
    int maxi = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == 1){
            cnt++;
        }
        else{
            cnt = 0;
        }

        maxi = max(maxi, cnt);
        
    }

    //return the value
    return maxi;
}

int main(){

    //array to find the 1's in
    vector<int> arr = {1, 0, 1, 1, 0, 0, 1, 1, 1};

    //printing the maximum value
    cout << "the maximum no of cosecutive ones is: " ;
    cout << findOnes(arr);
    return 0;
}
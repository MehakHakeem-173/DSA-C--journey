#include<bits/stdc++.h>
using namespace std;

int findNumber(vector<int> arr){

    //loop through the elements
    for (int i=0; i<arr.size(); i++){

        //current element to check
        int num = arr[i];
        int cnt = 0;

        //count occurence if the element
        for(int j=0; j<arr.size(); j++){
            if(arr[j] == num){
                cnt++;
            }

        }

        //if the element exist only once, return it
        if(cnt == 1) return num;
    }

    //or return -1, this line should never be reached
    return -1;

}

int main(){

    //array to find the element in
    vector<int> arr = {1, 2, 3, 3, 2, 4, 1};

    //print answer
    cout << findNumber(arr);
}
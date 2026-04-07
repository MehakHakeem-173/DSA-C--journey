#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //functionfor reversing the array
    void reverseArray(vector<int>& arr){

        //use STL revers to reverse array
        reverse(arr.begin(), arr.end());
    }
};

int main(){
    
    Solution sol;

    //array before reversing
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "array before reversing: " << endl;
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    //calling the function
    sol.reverseArray(arr);

    //array after reversing
    cout << "array after reversing: " << endl;
    for (int num : arr) 
    cout << num << " ";

}
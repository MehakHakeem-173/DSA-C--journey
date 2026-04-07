#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> reverseArray(vector<int>& arr){
        int p1 = 0;
        int p2 = arr.size()-1;
        while(p1 < p2){
            swap(arr[p1] , arr[p2]);
            p1++;
            p2--;
        }
    }
};

int main(){
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "array before reversing: " << endl;
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    sol.reverseArray(arr);

    cout << "array after reversing: " << endl;
    for (int num : arr) 
    cout << num << " ";
}
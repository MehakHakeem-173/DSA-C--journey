 #include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m){

    }
};

int main (){
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};

    int n = 10, m = 7;

    Solution obj;
    vector<int> result = obj.findUnion(arr1, arr2, n, m);
    cout << "union of array 1 and array 2 : " << endl;
    for (int val : result)
    cout << val << " ";
    return 0;
}
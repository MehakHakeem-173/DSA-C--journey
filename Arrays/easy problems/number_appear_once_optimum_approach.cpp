#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int getSingleElement(vector<int> arr){
        int n = arr.size();
        int single = 0;

        for (int i=0; i<n; i++){
            single = single ^ arr[i];
        }

        return single;
    }
};

int main(){
    vector<int> arr = {1, 2, 3, 2, 3};
    Solution obj;
    int ans = obj.getSingleElement(arr);
    cout << "the single element is: " << ans << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

//to arrange array in such  a way that it comes +ive and -ive alteratively
class ArrayManipulator{
    public:

    vector<int> rearrangeArray(vector<int> arr) {

        //vector array to store positive elemnts
        vector<int> pos;

        //vector array to store -ive elements
        vector<int> neg;

        //loop through the array and store the elemnets in separate arrays
        for(int i=0; i<arr.size(); i++){
            if (arr[i] > 0){
                pos.push_back(arr[i]);
            }

            else{
                neg.push_back(arr[i]);
            }
        }

        //loop through array and store the elements back to array in arrange form
        for(int i=0; i<arr.size(); i++){
            arr[2 * i] = pos[i];
            arr[2 * i + 1] = neg[i];
        }

        //return vector array
        return arr;
    }
};

int main(){
    vector<int> arr = {1, 2, -4, -5};

    ArrayManipulator obj;

    vector<int> ans = obj.rearrangeArray(arr);
    for (int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}
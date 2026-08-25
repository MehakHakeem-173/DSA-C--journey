#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findFloor(vector<int> arr, int n, int target){

    int low = 0; 
    int high = n-1;
    int ans = -1;

    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] <= target){
            ans = arr[mid];
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return ans;
    }

    int findCeil(vector<int> arr, int n, int target){

    int low = 0; 
    int high = n-1;
    int ans = -1;

    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] >= target){
            ans = arr[mid];
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
    }

    pair<int, int> findFloorAndCeli(vector<int> arr, int n, int target ){
        int f = findFloor(arr, n, target);

        int c = findCeil(arr, n, target);

        return make_pair(f, c);
    }
};

int main(){
    vector<int> arr = {1, 2, 3, 4, 7, 8};
    int target = 5, n = 6;

    Solution obj;
    pair<int, int> ans = obj.findFloorAndCeli(arr, n, target);
    cout << "the floor and ceil are: " << ans.first << " " << ans.second << endl;
}
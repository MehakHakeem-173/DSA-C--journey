#include<bits/stdc++.h>
using namespace std;

//class solution to find the sum
class Solution{
    public:

    //function to find out if sum is possible
    string sumIsPossible(vector<int> arr, int target){

        //size of array
        int n = arr.size();

        //storing the indexes of array before sorting
        vector<pair<int, int>> numsWithIdex;
        for (int i=0; i<n; i++){
            numsWithIdex.push_back({arr[i], i});

        }

        //sorting the array
        sort(numsWithIdex.begin(), numsWithIdex.end());

        //creating two pointers
        int left = 0, right = n-1;

        //loop to see if the sum is possible
        while(left < right){

            int sum = numsWithIdex[left].first + numsWithIdex[right].first;

            //if sum is equal to target then return yes
            if(sum == target){
                return "YES";
            }

            //if sum is greater then target then come back to the lower value at the right side
            else if(sum > target){
                right--;
            }

            //if sum is lower then target then increment the value to the hight index
            else {
                right++;
            }
        
        return "NO";
        }
    }

    vector<int> sumOfIndeces(vector<int> arr, int target){
        int n = arr.size();

        vector<pair<int, int>> numsWithIndex;
        for(int i=0; i<n; i++){
            numsWithIndex.push_back({arr[i], i});
        }


        sort(numsWithIndex.begin(), numsWithIndex.end());

        int left = 0, right = n-1;
        
        while(left < right){
        int sum = numsWithIndex[left].first + numsWithIndex[right].first;
        if(sum == target){

            //return the indexes of both the elements
            return {numsWithIndex[left].second , numsWithIndex[right].second};
        }
        else if(sum > target){
            right--;
        }
        else{
            right++;
        }
    
        //or return two -1s if sum is not possible
        return {-1, -1};
    }
}
};

int main(){

    Solution sol;

    vector<int> arr = {2, 6, 5, 8, 12};
    int target = 14;

    cout << sol.sumIsPossible(arr, target) << endl;
    
    vector<int> res = sol.sumOfIndeces(arr, target);
    cout << "[" << res[0] << ", " << res[1] << "]" << endl;
}
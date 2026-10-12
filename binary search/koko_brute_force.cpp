#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    int isPossible(vector<int> arr, int mid, int h){
        long long hours = 0;
        for(int pile : arr){
            hours += (pile + mid - 1) / mid;

            if(hours > h){
                return false;
            }
        }

        return hours <= h;
    }

    public:
    int finddivisor(vector<int>& arr, int threshold){
        int low = 1;
        int high = *max_element(arr.begin(), arr.end());

        while(low < high){
            int mid = low + (high - low) / 2;
            if(isPossible(arr, mid, threshold)){
                high = mid;
            }

            else{
                low = mid + 1;
            }
        }

        return low;
    }
};

int main(){
    vector<int> arr = {2, 6, 7, 11};
    int threshold = 8;

    Solution sol;
    int result = sol.finddivisor(arr, threshold);
    cout << "the lowest speed is " << result << endl;
}
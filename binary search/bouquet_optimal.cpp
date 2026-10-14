#include<bits/stdc++.h>
using namespace std;

class Solution{

    bool canMakeBouquet(vector<int>& arr, int day, int m, int k){
        int consecutive = 0;
        int bouquet = 0;

        for(int bloom : arr){
            if(bloom <= day){
                consecutive++;

                if(consecutive == k){
                    bouquet++;

                    consecutive = 0;
                }
            }

            else{
                consecutive = 0;
            }
        }

        return bouquet >= m;
    }
    public:
    int minDays(vector<int>& arr, int m, int k){
        if(k * m > arr.size()) return 0;

        int low = *min_element(arr.begin(), arr.end());

        int high = *max_element(arr.begin(), arr.end());

        int answer = -1;
        while(low < high){
            int mid = low + (high - low) / 2;

            for(int day=low; day<=high; day++){
                if(canMakeBouquet(arr, mid, m, k)){

                    answer = mid;
                    high = mid - 1;
                }

                else{
                    low = mid + 1;
                }
            }
        }

        return answer;
    }
};

int main(){
    vector<int> arr = {1, 10, 4, 10, 2};
    int k = 3, m = 1;

    Solution sol;
    cout << sol.minDays(arr, k, m);
}
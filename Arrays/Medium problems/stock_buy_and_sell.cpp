#include<bits/stdc++.h>
using namespace std;

//class to find the maximum profit
class Solution{
    public:

    //function to find the maximum profit
    int stockBuySell(vector<int> arr){

        //size of array
        int n = arr.size();

        //initialize the maximum profit from zero 
        int maxProfit = 0;

        //nested loop to find the profit
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){

                //assign the difference of the rate of the product on the buy and sell date to the integer profit
                int profit = arr[j] - arr[i];

                //maximum profit will be the greater in both profit and the maximum one, which was zero at first
                maxProfit = max(maxProfit ,  profit);
            }
        }

        //retur maxprofit which can't be negative
        return maxProfit;
    }
};

int main(){
    Solution sol;
    //array to find the maximum in
    vector<int> arr = {7, 1, 5, 3, 6, 4};

    //calling the function
    cout << sol.stockBuySell(arr);
    return 0;
}
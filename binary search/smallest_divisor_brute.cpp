#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    bool isSmallestElement(vector<int>& arr, int divisor, int threshold){

        //variable to store the sum
        int total = 0;

        //finding the sum of a ll the divsions
        for(int num: arr){
            total += (num + divisor - 1)/divisor;

            //return falso if it's not working
            //it's just for a single divisor
            if(total > threshold){
                return false;
            }
        }

        //if it works, return that threshold is greater that the total we made
        return total <= threshold;
    }

    public:

    //find the smallest divisor
    int smallestDivisor(vector<int> arr, int m){

        //finding th emaximim vlue to return if a smaller divisor doesn't found
        int maxvalue = *max_element(arr.begin(), arr.end());


        //calling the function for every divisor lesser that the maximum element
        for(int divisor=1; divisor<=maxvalue; divisor++){
            if(isSmallestElement(arr, m, divisor)){

                //return divisor if the result come as true 
            return divisor;
            }
        }

        //or just print the maximum value
        return maxvalue;
    }
};

int main(){
    vector<int> arr = {1, 2, 5, 9};
    int threshold = 6;

    Solution sol;
    cout << sol.smallestDivisor(arr, threshold) << endl;
    return 0;
}
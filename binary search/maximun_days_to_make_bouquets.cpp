#include<bits/stdc++.h>
using namespace std;

class Solution{

    //function to check for asingle day
    private:
    bool CanMakeBouquets(vector<int>& arr, int day, int m, int k){

        //veriable to store number ofconsicutive flower that will bloom
        int consecutive = 0;

        //variable to store no of buquestes formed 
        int bouquete = 0;

        //go through the array for every day 
        for(int bloomDay : arr){

            //if the bloom hashappened then add it to the bouquet
            if(bloomDay <= day){
                consecutive++;

                //if bouquite if full then add it to the other bouquetes and reset the flowers to a new bouquet
                if(consecutive == k){
                    bouquete++;

                    consecutive = 0;
                }
            }
            
            //if the flower is unblommed , discard the earlier flowers also
            else{
            consecutive = 0;
            }
        }

        //if enough bouquets are formed,choose this day for now
        return bouquete >= m;
    }

    public:
    int minObj(vector<int>& arr,int k, int m){

        //if all the flower can't make the requiredbouquetes,return -1
        if(m * k > arr.size())
        return -1;

        //minimum 
        int maxDay = *max_element(arr.begin(), arr.end());

        int minDay = *min_element(arr.begin(),arr.end());

        for(int day = minDay; day<=maxDay; day++){
            if(CanMakeBouquets(arr, day, m, k)){
                return day;
            }
        }
        return -1;
    }
};

int main(){
    vector<int> arr = {1, 2, 4, 4, 10};
    int k = 3, m = 1;

    Solution sol;
    cout << sol.minObj(arr, k, m) << endl;
    return 0;
}
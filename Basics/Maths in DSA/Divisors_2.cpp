#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //function to ge all divisors
    vector<int> getDivisors(int N){
        //creat a vector to star divisors
        vector<int> res;

        //loop from 1 to sqareroot of N
        for(int i=1;i*i<=N;i++){
            //check if i is divisor
            if(N%i == 0){
                //add i to the result
                res.push_back(i);

                //if N/i is different from i, add N/i too
                if(i!= N/i){
                    res.push_back(N/i);
                }
            }
        }
        //return the list of divisors
         return res;
    }
};

int main(){
    //create object of solution class
    Solution sol;
    //number to check the divisors
    int N = 36;
    //get divisors
    vector<int> result = sol.getDivisors(N);
    //print the result
    cout<<"divisors of "<< N <<" :";
    for (int val : result){
        cout<< val <<" ";
    }
    cout<<endl;
    return 0;
}
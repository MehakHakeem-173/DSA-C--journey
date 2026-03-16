#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //function to fine the divisors
    vector<int> getDivisors(int N){
        //vector to store the devisors
        vector<int> res;

        //loop for checking the devisors
        for (int i=1;i<=N/2;i++){
            //if the number is divisor apply push_back to print it in the end 
            
            if(N%i==0){
                res.push_back(i);
            }
        }
        //return the vector obtained
        return res;
    }
    
};

int main(){
    //creat obj solution class
    Solution obj;
    //taking the number
    int N = 36;

    //calling the function
    vector<int> result = obj.getDivisors(N);

    //printing the result
    cout<<"Divisors of" << N <<": ";
    for (int val : result){
        cout<< val<< " ";
    }
    return 0;
}
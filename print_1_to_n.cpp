#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //function for printing the nuber
    void printNumbers(int current, int n){
        //base case: if current exceeds n, stop recursion
        if (current > n){
            return;
        }
        
        //printing the numbers
        cout << current << " ";

        //calling the function back
        printNumbers(current +1, n);
    }
};

int main(){
    //making class solution 
    Solution sol;
    int N = 10;

    sol.printNumbers(1, N);
    cout<<endl;
    return 0;

}
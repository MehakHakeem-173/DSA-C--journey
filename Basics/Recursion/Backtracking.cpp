#include<bits/stdc++.h>
using namespace std;

//backtracking recursion print numbers in decending order
//backtracking call the functions all the times at has to and the print the numbers 
class Solution{
    public:
    //function for printing the number
    void printNumbers(int current, int n){
        //base case: if current exceeds n, stop recursion
        if (current > n){
            return;
        }

        //calling the function before printing the number
        printNumbers(current +1, n);

        //printing the numbers
        cout << current << " ";

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
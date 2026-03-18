#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //function for printing the name N times
    void printName(string name, int N){
        //base case: if the number reach zero, stop recursion
        if(N == 0){
            return;
        }
        //print the name
        cout << name << endl;
        //call the function again
        printName(name, N-1);
    }
};

int main(){
    Solution sol;
    int N = 5;
    string name = "Mehak";
    sol.printName(name , N);
    return 0;
}
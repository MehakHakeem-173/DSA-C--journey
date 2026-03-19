#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int sumofNumbers(int N){

        //(n(n-1))/2 gives the sum of numbers up to n
        return (N*(N-1))/2;
    }
    
};

int main(){
    Solution obj;
    //number up to which we want to sum
    int N;
    //taking the number
    cin >> N;

    //calling the function
    int result = obj.sumofNumbers(N);
    
    //printing the result
    cout << result << endl;
}
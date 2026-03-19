#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //function for counting the number
    int countNumbers(int N){
        //veriable for adding the numbers
        int sum = 0;
        
        //loop for adding the numbers
        for (int i=1;i<=N;i++){
            sum += i;
        }
        return sum;
    }
};

int main(){
    Solution obj;
    //number up to which we want to count
    int N;
    //taking the number
    cin >> N;
    
    //calling the function
    int result = obj.countNumbers(N);

    //printing the result
    cout << result << endl;
}
#include<bits/stdc++.h>
using namespace std;


//function for calculating the factorial
int factorial(int n){

    //veriable for storing th eanswer
    int ans = 1;

    //loop for multiplying the factorials of the number
    for (int i=1;i<=n;i++){
        ans = ans * i;
    }

    //return the result 
    return ans;

}

int main(){

    //input value for which factorial to be calculted
    int N = 5;

    //calling the function
    int result = factorial(N);

    //printing the answer
    cout << "factorial of " << N << " is: " << result;
    return 0;
}
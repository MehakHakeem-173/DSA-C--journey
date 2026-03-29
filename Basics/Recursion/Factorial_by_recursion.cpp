#include<bits/stdc++.h>
using namespace std;


//function for the factorial of the number
int factorial(int n){

    //base-case for the recursion
    if (n == 0){
    return 1;
    }

    //recursive case n*factorial(n-1)
    return n * factorial (n - 1);
}

int main(){
    //number to find the factorial for
    int N = 6;

    //printing the output of the fraction of the number
    cout << factorial(N) << endl;
}
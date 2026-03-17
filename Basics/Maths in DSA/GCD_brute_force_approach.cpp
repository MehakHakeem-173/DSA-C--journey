#include<bits/stdc++.h>
using namespace std;

//function for finding GCD
int findGCD(int n1, int n2){
    //initiating variable for storing GCD
    int gcd = 1;
    //loop for finding the GCD
    //run the loop upto the minimum of the two cuz the GCD can't be greater then that
    for(int i=1; i<=min(n1, n2); i++){
        //if the number is divisible on both numbers ,  store it in GCD
        if ( n1%i == 0 && n2%i == 0 ){
            gcd = i;
        }
    }
    //return the value of GCD 
    return gcd;
}

int main(){
    //number for which we are finding GCD
    int N1 = 30, N2 = 45;
    
    //calling the function
    int gcd = findGCD(N1, N2);

    //printing the GCD of N1 and N2
    cout << "GCD of "<< N1 << " and " << N2 << " is " << gcd;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

//function for finding the GCD
int findGCD(int n1, int n2){
    //loop for finding the GCD
    for(int i=min(n1, n2); i>0; i--){
        //th efirst number divisible on both n1 and n2 is the GCD
        if(n1%i == 0 && n2%i == 0){
            //return the number
            return i;
        }
    }
    //if there is no number 
    //return 1 as a comon divisor
    return 1;
}

int main(){
    //numbers to find the divisors for
    int N1 = 15, N2 = 40;
    
    //callng the function
    int gcd = findGCD(N1, N2);

    //printing the result
    cout << "the GCD of " << N1 << " and " << N2 << " is " << gcd;
    return 0;
}
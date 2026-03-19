#include<bits/stdc++.h>
using namespace std;

//function to find the GCd through Euclindean algorithm
int findGCD(int a, int b){
    //loop until one of the numbers is 0
    while(a>0 && b>0){
        
        //if a is greater number, keep subtracting the b from a untill the b become 0
        //we can do it through modulus to avoid repeatative subtractions
        if(a > b){
            a = a % b;
        }

        //if b is grater , apply modulus on b
        else{
            b = b % a;
        }
    }

    //if a went to 0 before b
    //return the reminder of b
    if(a == 0){
        return b;
    }

    //or else return the reminder of a
    else{
        return a;
    }
}

int main(){
    //numbers to find the divisors for
    int N1 = 45, N2 = 30;

    //calling the function
    int gcd = findGCD(N1, N2);
    
    //printing the gcd
    cout << "the GCD of " << N1 << " and " << N2 << " is " << gcd;
    return 0;
}
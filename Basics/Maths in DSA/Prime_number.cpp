#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int N){
    //variable for storing the number of divisibles
    int cnt = 0;

    //loop for checking the number of divisibles
    for(int i=1;i<=N;i++){
        //if the number is divisible increment the cnt
        if(N%i == 0){
            cnt++;
        }
    }

    //if the number of divisibles are equal to 2 return true else false
    if(cnt == 2){
        return true;
    }
    else{
        //the number is not prime
        return false;
    }
}

int main(){
    //number to check
    int N = 127;
    //calling function to check if the number is prime
    bool isPrime = checkPrime(N);
    if(isPrime){
        cout<<"the number "<< N << " is a prime";
    }
    else{
        cout<<"the number "<< N << " is not a prime";
    }
    return 0;
}
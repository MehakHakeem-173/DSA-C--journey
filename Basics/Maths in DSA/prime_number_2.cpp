#include<bits/stdc++.h>
using namespace std;

//function for checking if the number is prime
bool checkPrime(int N){
    //veriable to store the number of divisors
    int cnt = 0;
    //loop for checking the number of divisors
    for(int i=1;i*i<=N;i++){
        if(N%i == 0){
            cnt++;
            //if the number is not square squareroot of N, add the number too
            if(N/i != i){
                cnt++;
            }
        }
    }

    //if the number of divisors are equal to 2, its a prime
    if(cnt == 2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    //example number
    int N = 127;
    //calling the function 
    bool isPrime = checkPrime(N);
    if(isPrime){
        cout << "The number " << N << " is prime number"<< endl;
    }
    else{
        cout << "the number "<< N << " is not a prime number"<< endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int findGCD(int a, int b){
    while(a>0 && b>0){
        if(a > b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }
    if(a == 0){
        return b;
    }
    else{
        return a;
    }
}

int main(){
    int N1 = 45, N2 = 30;
    int gcd = findGCD(N1, N2);
    cout << "the GCD of " << N1 << " and " << N2 << " is " << gcd;
    return 0;
}
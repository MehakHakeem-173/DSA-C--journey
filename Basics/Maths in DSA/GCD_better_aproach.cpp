#include<bits/stdc++.h>
using namespace std;

int findGCD(int n1, int n2){
    for(int i=min(n1, n2); i>0; i--){
        if(n1%i == 0 && n2%i == 0){
            return i;
        }
    }
    return 1;
}

int main(){
    int N1 = 15, N2 = 40;
    int gcd = findGCD(N1, N2);
    cout << "the GCD of " << N1 << " and " << N2 << " is " << gcd;
    return 0;
}
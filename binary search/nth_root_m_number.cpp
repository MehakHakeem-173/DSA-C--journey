#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 3, m = 27;

    //we run the loop for m instead of n
    for(int i=0; i<m; i++){
        long long power = pow(i , n);
        if(power == m){
            cout << "the number is " << i << endl;
        }
        if(power > m){
            break;
            cout << "the root doesn't exist";
        }
    }
}
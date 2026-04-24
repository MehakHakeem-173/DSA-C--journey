#include<bits/stdc++.h>
using namespace std;

int main(){

    //enter the number 
    int n = 5;

    //if n is 0, print only zero
    if (n == 0){
        cout << 0;
    }

    //if n is 1, print 0 and 1
    else if ( n == 1){
        cout << 0 << " " << 1 ;
    }

    //if number is greater then 1, creat an array of index n+1
    else {
        int fib[n + 1];

        //index 0 and 1
        fib[0] = 0;
        fib[1] = 1;

        //loop start from 2 to n
        for (int i=2; i<=n; i++){

            //fibonacci is number-1 and number-2
            fib[i] = fib[i-1] + fib[i-2];
        }

        //printing the fibonacci
        cout << "the fibonacci of the number " << n << "the term: " << endl;
        for (int i=0; i<=n; i++){
            cout << fib[i] << " " ;
        }
    }
    return 0;
}
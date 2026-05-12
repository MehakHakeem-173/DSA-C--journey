#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;

    //edge case: if n=0, print only 0
    if(n == 0){
        cout << 0;
    }

    //special case: if n=1, print only 0 and one
    else if (n == 1){
        cout << 0 << " " << 1 << endl;
    }

    //general case: generate and print fibonacci series upto nth term
    else{

        //array to store fionacci number upto index n
        int fib[n + 1];
        fib[0] = 0;
        fib[1] = 1;

        //print the fibonacci series
        for (int i=2; i<=n; i++){
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        cout << "the fibonacci of the number " << n << " is follow" << endl;
        for (int i=0; i<=n; i++){
            cout << fib[i] << " " ;
        }
    }
    return 0;
}
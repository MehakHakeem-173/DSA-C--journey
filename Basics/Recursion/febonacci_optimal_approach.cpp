#include<bits/stdc++.h>
using namespace std;

int fibonacci(int N){
    if (N <= 1) {
        return N;
    }
    int last = fibonacci(N-1);
    int Slast = fibonacci(N-2);

    return last + Slast;
}

int main () {
    int N = 5;
    for (int i=0; i<=N; i++){
        cout << fibonacci(i) << " ";
    }
    return 0;
}
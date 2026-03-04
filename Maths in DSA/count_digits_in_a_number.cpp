#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//function to count the number of digits
int countDigits(int n){
    //initializing a variable
    //cnt is the counter veriable 
    int cnt = 0;
    while(n>0){
        //increment of the veriable
        cnt = cnt + 1;
        //taking module of the number 
        //until it become zero
        n = n/10;
    }
    return cnt;
}

int main(){
    // N is the number of which we will count the digits
    int N = 13476345;
    cout<<"N: "<< N << endl;
    //calling the function 
    //countDigit is the function we are counting the digits in
    int digits = countDigits(N);
    //result of the counted digits
    cout<< "Number of digits in N: "<<digits << endl;
    return 0;
}
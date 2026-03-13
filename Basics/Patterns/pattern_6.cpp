#include<iostream>
using namespace std;

void Pattern1(int N){ //this function is for a inverse triangle of numbers
    for(int i=1;i<N;i++){ //outer loop for rows
        for(int j=i;j<=N;j++){ //inner loop for columns
            cout<<j<<" "; 
        }
        cout<<endl; //end of a row , only for outer loop
    }
}

int main(){
    int N = 5; // n represent the number of rows and columns
    Pattern1(N); //calling a function
    return 0;
}
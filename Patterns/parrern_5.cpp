#include<iostream>
using namespace std;

void Pattern1(int N){ //this function is for inverse triangle
    for(int i=0;i<N;i++){ //outer loop for rows
        for(int j=N;j>i+1;j--){ //inner loop fpr columns
            cout<<"*"<<" "; 
        }
        cout<<endl; //end of a row , only for outer loop
    }
}

int main(){
    int N = 5; // n represent the number of rows and columns
    Pattern1(N); //calling a function
    return 0;
}
#include<iostream>
using namespace std;

void Pattern1(int N){
    for(int i=0;i<N;i++){ //outer loop for rows
        for(int j=0;j<N;j++){ //inner loop fpr columns
            cout<<"*"<<"."; 
        }
        cout<<endl; //end of a row , only for outer loop
    }
}

int main(){
    int N = 5; // n represent the number of rows and columns
    Pattern1(N); //calling a function
    return 0;
}
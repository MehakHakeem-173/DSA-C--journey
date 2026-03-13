#include<iostream>
using namespace std;

void Pattern1(int N){ //this function is for a right angled-triangle pattern
    for(int i=1;i<=N;i++){ //outer loop for rows
        for(int j=1;j<=i;j++){ //inner loop for columns
            cout<<i<<" "; 
        }
        cout<<endl; //end of a row , only for outer loop
    }
}

int main(){
    int N = 5; // n represent the number of rows and columns
    Pattern1(N); //calling a function
    return 0;
}
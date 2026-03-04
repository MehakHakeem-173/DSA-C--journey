#include<iostream>
using namespace std;

void Pattern1(int N){ //creating a function , the function is for triangle pattern
    for(int i=0;i<N;i++){ //printing the rows
        for(int j=0;j<=i;j++){ //printing the columns
            cout<<"*"<<"."; 
        }
        cout<<endl; //end of the rows, only for outer loops
    }
}

int main(){
    int N = 5; //N represent the number of rows or columns
    Pattern1(N); // calling the function
    return 0;
}
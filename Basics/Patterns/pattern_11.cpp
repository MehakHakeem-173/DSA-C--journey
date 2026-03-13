#include<iostream>
using namespace std;

void pattern10(int n){
    //outer loop for number of rows
    for(int i=0;i<=n;i++){
        //ist row start by printing a single 1
        int start = 1;
        //if the row index is even, start from 1
        if(i%2 == 0) start = 1;
        else{
            //if the row index is odd , start from 0
            start = 0;
        }
        //outer loop for number 
        for (int j=0;j<=i;j++){
            cout<<start;
            //modify the veriable
            start = 1- start;
        }
        //end of each row
        cout<<endl;
    }
}

int main(){
    //size of triangle
    int N= 5;
    //calling the function
    pattern10(N);
    return 0;
}
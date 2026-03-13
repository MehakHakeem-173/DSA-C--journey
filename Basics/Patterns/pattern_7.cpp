#include<bits/stdc++.h>
using namespace std;

class solution{
    public:


void Pattern7(int N){ //this function is for a pyramid shape having stars
    for(int i=0;i<N;i++){ //outer loop for rows
        for(int j=0;j<N-i-1;j++){ //inner loop for space before peak of stars in pyramid
            cout<<" "; 
        }
        for(int j=0;j<2*i+1;j++){ // inner loop for the stars in peak of pyramid
            cout<<"*";
        }
        for(int j=0;j<N-i-1;j++){ //inner loop for space after the peak of the pyramid stars
            cout<<" ";
        }
        cout<<endl; //end of a row , only for outer loop
    }
}
};

int main(){
    solution sol;
    int N = 5; // n represent the number of rows and columns
    sol.Pattern7(N); //calling a function
    return 0;
}
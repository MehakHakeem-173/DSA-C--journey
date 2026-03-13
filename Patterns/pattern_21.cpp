#include<bits/stdc++.h>
using namespace std;

void pattern21(int N){
    //outer loop for number of rows
    for(int i=0;i<N;i++){
        //inner loop for nuber of columns
        for(int j=0;j<N;j++){
            //condition for printing of stars
            if( i==0 || j==0 || i==N-1 || j==N-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        // end of each row
        cout<<endl;
    }
}

int main(){
    //size of the pattern
    int N = 4;
    //calling a function
    pattern21(N);
    return 0;
}
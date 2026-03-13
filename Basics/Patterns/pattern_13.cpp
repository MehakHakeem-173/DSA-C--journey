#include<bits/stdc++.h>
using namespace std;

//function for pattern 13
void pattern13(int N){
    //starting number
    int digit = 1;
    //outer loop for number of rows
    for(int i=1;i<=N;i++){
        //inner loop for number of columns
        for(int j=1;j<=i;j++){
            //printing the digit
            cout<<digit<<" ";
            //updating the number for the next print
            digit += 1;
        }
        //end of each row
        cout<<endl;
    }
}

int main(){
    //size of triangle
int N = 5;
//calling the function
pattern13(N);
return 0;
}
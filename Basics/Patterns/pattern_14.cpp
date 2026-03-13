#include<bits/stdc++.h>
using namespace std;

//function to print the pattern of alphabits
void pattern13(int N){
    //outer loop for number of rows
    for(int i=0;i<N;i++){
        //inner loop for number of columns
        for(char ch='A';ch<='A'+i;ch++){//this loop contain char datatype
            //printing the pattern
        cout<<ch;
        }
        //end of the row
    cout<<endl;
  }
}

int main(){
    //size of triangle
    int N = 5;
    //calling the function
    pattern13(N);
}
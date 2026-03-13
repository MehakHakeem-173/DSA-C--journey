#include<bits/stdc++.h>
using namespace std;

//function for pattern
void pattern16(int n){
    //outer loop for number of rows
    for(int i=0;i<n;i++){
        //define the character based on each row
        char ch = 'A' + i;
        //inner row for number of columns
        for(int j=0;j<=i;j++){
            //print the characters
            cout<<ch<<" ";
        }
        //end of each row
        cout<<endl;
    }
}

int main(){
    //size of pattern
    int N = 5;
    //calling the function
    pattern16(N);
    return 0;
}
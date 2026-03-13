#include<bits/stdc++.h>
using namespace std;

//function for pyramid of alphabates
void pattern17(int N){
    //outer loop for number of rows
   for(int i=0;i<N;i++){
    //inner loop for space between characters
    //the space will be equal to N-i-1
    for(int j=0;j<N-i-1;j++){
        //print the space
        cout<<" ";
    }
    //assighning a character datatype
        char ch = 'A';
        //mid point of the row = (2*i+1)/2
        int breakpoint = (2*i+1)/2;
        //inner loop for for characters
        for(int j=0;j<2*i+1;j++){
            cout<<ch;
            //increment and decrement of characters
            if(j<=breakpoint){
                ch++;
            }
            else{
                ch--;
            }
        }
        //inner loop for space after characters
        //again equal to N-i-1
        for(int j=0;j<=N-i-1;j++){
            cout<<" ";
        }
        //end of the row
        cout<<endl;

   }
}

int main(){
    //size of pattern
    int N = 6;
    //calling the function
    pattern17(N);
    return 0;
}
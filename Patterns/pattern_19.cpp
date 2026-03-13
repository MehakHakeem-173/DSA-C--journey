#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //function to print pattern 19
    void pattern19(int N){
        //initializing a variable for upper half space
         int inis = 0;
         //outer loop for number of rows 
        for(int i=0;i<N;i++){
            //inner loop for stars before space
            for(int j=1;j<=N-i;j++){
                cout<<"*";
            }
            //inner loop for inner space 
            for(int j=0;j<inis;j++){
                cout<<" ";
            }
            //inner loop for stars after space
            for(int j=1;j<=N-i;j++){
                cout<<"*";
            }
            //increment of space
            inis += 2;
            //end of each row
            cout<<endl;
        }


        //initializing a variable for lower half space 
        int iniS = (N * 2 - 2);
        //outer loop for lower half rows
        for(int i=1;i<=N;i++){
            //inner loop for stars before space
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            //inner loop for space in lower half
            for(int j=0;j<iniS;j++){
                cout<<" ";
            }
            //inner loop for stars after space
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            //decrement of space
            iniS -=2;
            //end of each row
            cout<<endl;
        }
    }
};

int main(){
    //create solution object
    Solution obj;
    //size of pattern
    int N = 5;
    //calling pattern function
    obj.pattern19(N);
    return 0;
}
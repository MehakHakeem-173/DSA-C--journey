#include<iostream>
using namespace std;

//function for pattern of stars
void pattern10(int N){
    //outer loop for number of rows , will run 2*N-1 times
    for (int i=1;i<=2*N-1;i++){
        //i which is the number of rows , we have give it a name stars
        //or assign the number of rows into a variable name stars
        //int stars = i;
        //but if the number of rows exceed the input we have given 
        //then it will be equal to 2*N-1 no of rows
        //we will break the symmetry at here, 
        // or it will be a triangle of 2*N-i rows
        //if(i > N) stars = 2*N-i;//remember that its i in here not 1
        //inner loop for no of clolumns
        for (int j=1;j<=i;j++){
            //print the patteren of * every time the loop runs
            cout<<"*";
        }
        //end of the row
        cout<<endl;
    }
}

int main (){
    int N = 5;
    pattern10(N);
    return 0;
}
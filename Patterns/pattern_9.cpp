#include<iostream>
using namespace std;

class Solution{
public:
//function for the upward peak above the mid point ( erract pyramid)
void erract_pyramid(int N){
    for(int i=0;i<N;i++){ //outer loop for rows
        // formula for space before the stars = N-i-1
        for(int j=0;j<N-i-1;j++){ //inner loop for space before peak of stars in pyramid
            cout<<" "; 
        }
        //formula for stars = 2*i+1
        for(int j=0;j<2*i+1;j++){ // inner loop for the stars in peak of pyramid
            cout<<"*";
        }
        // formula for space after the stars = N-i-1
        for(int j=0;j<N-i-1;j++){ //inner loop for space after the peak of the pyramid stars
            cout<<" ";
        }
        cout<<endl; //end of a row , only for outer loop
    }
}
//function for the downward peak of pattern(inverted pyramid)
     void inverted_pyramid(int N){
        //outer loop for rows
        for(int i=0;i<N;i++){
            //inner loop for space before the stars 
            //increase with no of rows
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            //inner loop for row of stars
            // formula for number of stars = 2*N-(2*i+1)
            for(int j=0;j< 2*N - (2*i+1);j++ ){
                cout<<"*";
            }
            //inner loop for space after the stars
            //increase with row number
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            //end of each row
            cout<<endl;
        }
    }
};

int main(){
    //taking a veriable 
 int N = 5;
 Solution obj;
 //calling functions from the class solution
 obj.erract_pyramid(N);
 obj.inverted_pyramid(N);  
}
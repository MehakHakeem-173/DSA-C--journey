#include<bits/stdc++.h>
using namespace std;

//function for pattern 22
void pattern22(int N){
    //outer loop for nmber of rows
    for(int i=0;i<2*N-1;i++){
        //inner loop for number of columns
        for(int j=0;j<2*N-1;j++){
            //distance from top
            int top = i;
            //distance from left
            int left = j;
            //distance from bottom
            int bottom = (2*N-2)-i;
            //distance from right
            int right = (2*N-2)-j;
            //finding the minimum distance from all the sides
            int minDist = min(min(left, right), min(top,bottom));
            //print number (start with N at border , decrease inside)
            cout<<(N - minDist)<<" ";
        }
        //move to the next row
        cout<<endl;
    }

}

int main(){
    int N = 5;
    pattern22(N);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
//making function
void pattern12(int N){
    //number of space b/w numbers will be 2*N-1
    int space = 2*N-1;
    //outer loop for number of rows
    for(int i=1;i<=N;i++){
        //inner loop for numbers before space
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //inner loop for space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //inner loop for number after space
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        //end of the row
        cout<<endl;
        //modification of veriable space
        space -=2;
    }
}

int main(){
    //size of pattern
    int N= 5;
    //calling the function
    pattern12(N);
    return 0;
}
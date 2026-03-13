#include<bits/stdc++.h>
using namespace std;

//function for pattern no 15
void pattern15(int N){
    //outer loop for number of rows
for(int i=1;i<=N;i++){
    //inner loop for pattern of alphabits
    for(char ch='A';ch<='A' + (N-i);ch++){
        //printing the pattern
        cout<<ch<<" ";
    }
    //end of each row
    cout<<endl;
}
}

int main(){
    //size of pattern
    int N= 5;
    //calling a function
    pattern15(N);
    return 0;
}
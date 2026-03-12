#include<bits/stdc++.h>
using namespace std;

//function for pattern on alphabats
void pattern18(int N){
    //outer loop for number of rows
    for(int i=0;i<N;i++){
        //initializing a character which start from ('A'+N-1)-i
       char startchar = ('A'+N-1)-i;
       //print characters from ('A'+N-1)-i to ('A'+N-i)
       for(char ch=startchar;ch<=('A'+N-1);ch++){
        //printing of character
        cout<<ch;
       }
       //end of the row
       cout<<endl;
    }
}

int main(){
    //size of the pattern
    int N = 5;
    //calling the function
    pattern18(N);
    return 0;
}
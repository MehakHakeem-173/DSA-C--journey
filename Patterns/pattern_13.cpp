#include<bits/stdc++.h>
using namespace std;

void pattern13(int N){
    int digit = 1;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<digit<<" ";
            digit += 1;
        }
        cout<<endl;
    }
}

int main(){
int N = 5;
pattern13(N);
return 0;
}
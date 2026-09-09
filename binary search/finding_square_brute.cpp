#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 40;

    int ans = 0;

    for(int i=1; i<=n/2; i++){
        if((long long)i * i < n){
            ans = i;
        }
        else{
            break;
        }
    }

    cout << "the square root is: " << ans;
}
#include<bits/stdc++.h>
using namespace std;

int main () {
    //febonacci number
    int n = 5;

    //if n = 0, print only 0
    if (n == 0){
        cout << 0;
    }

    else{

        int secondLast = 0; //(i-2) index
        int last = 1; // (i-1) index

        //printing both indexes
        cout << "fabinocci series up to " << n << "th term:" << endl;
        cout << secondLast << " " << last << " " ;

        //integer for next number
        int cur;

        //loop to write other numbers
        for (int i=2; i<=n; i++){
            cur = last + secondLast;
            secondLast = last; 
            last = cur;

            //print next number
            cout << cur << " ";
        }
    }

    return 0;
}
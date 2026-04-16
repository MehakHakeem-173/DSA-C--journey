#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "enter the string" << endl;
    cin >> s;

    int hash[256] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]]++;
    }
    int q;
    cout<< "enter the number of characters you want to find the frequency for" << endl;
    cin >> q;
    while (q--){
        char c;
        cout << "enter the character" <<endl;
        cin >> c;
        cout << hash[c] << endl;
    }
    return 0;
}
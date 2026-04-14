#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "enter the caracters" << endl;
    cin >> s;

    int hash[26] = {0};
    for (int i=0; i<s.size(); i++){
        hash[s[1]-'a']++;
    }
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;

        cout << hash[c - 'a'] << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter the number of digits  " << endl;
    cin >>n;
    int arr[n];
    cout << " enter the digits" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    int q;
    cout << "enter the number of frequencies you want to find " << endl;
    cin >> q;
    while(q--){
        cout << " enter the digit " << endl;
        int number;
        cin >> number;
        cout << mp[number] << endl;
    }
    return 0;
}
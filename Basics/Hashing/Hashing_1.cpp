#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout<< "Enter the size of array" << endl;
    cin >> n;
    int arr[n];

    cout << "enter the elements of array" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int hash[13] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }

    int q;

    cout << "enter the number of elements you want to find the frequency for" << endl;
    cin >> q;
    while(q--){
        int number;
        cout << "enter the elements" << endl;
        cout << endl;
        cin >> number;
        cout << hash[number] << endl;
    }
}
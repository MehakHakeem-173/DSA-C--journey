#include<bits/stdc++.h>
using namespace std;

//function to check the string
bool isPalindrom(int i, string str){

    //base case: return true if i get larger then half of the string
    //its mean the string is palindrom
    if (i >= str.length() /2 ) return true;

    //at some point if the characters from both sides doesn't match
    //return false
    if (str[i] != str[str.length()-i-1]) return false;

    //call the function again
    return isPalindrom(i+1, str);
}

int main(){

    //string str
    string str = "madam"; 

    //printing the answer
    cout << isPalindrom(0, str);
    cout  << endl;
    return 0;
}
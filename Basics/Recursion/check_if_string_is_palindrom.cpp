#include<bits/stdc++.h>
using namespace std;

//function to check the string
bool isPalindrom(string s){

    int left = 0, right = s.length() - 1;

    //loop to find non-characters
    while (left < right){

        //if index is not a character, move farward
        if (!isalnum(s[left]))
        left++;

        //same but move backward
        else if (!isalnum(s[right]))
        right--;

        //if characters doesn't match, return false
        else if (tolower(s[right]) != tolower(s[left]))
        return false;

        //else the loop runs perfactly and the string is a palindrom
        else{
            right--;
            left++;
        }
        return true;
    }
}

int main(){

    //string str
    string str = "ABCDCBA";

    //calling the function
    bool ans = isPalindrom(str);

    //printing the result
    if (ans == true){
        cout << "palindrom";
    }
    else{
        cout << "not a palindrom";
    }
    return 0;
}
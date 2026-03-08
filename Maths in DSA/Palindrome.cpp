#include<iostream>
using namespace std;

//making a function 
bool Palindrome (int n){
    //declearing a the expacted output to a variable
   int revNum = 0;
   //making a duplicate of origional number
   int duplicate_no = n;
   
   while(n > 0){
    // using modulus to get the last digit from the number
    int lastDigit = n % 10;
    //modifying the number
    revNum = (revNum * 10) + lastDigit;
    //removing the last digit from the original number
    n = n/10;
   }
   //check if the originoal number is equal to its reverse
   if(duplicate_no == revNum){
    //if its equal return true to show that they match
    return true;
   }
   else{
    //return false if it doesn't match
    return false;
   }
}

int main(){
    int number = 1234321;
    //check if the number is palindrome
    if (Palindrome(number)){
    cout << number << " is a palindrome" << endl;
    }
    else{
        cout << number << " is not a palindrome " << endl;
    }
        return 0;
    
}
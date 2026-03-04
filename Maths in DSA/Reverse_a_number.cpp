#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    // Function to reverse digits of a number
    int reverseNumber(int n) {
        // Variable to store reversed number
        int revNum = 0;

        // Loop until all digits are processed
        while (n > 0) {
            // Get the last digit
            int lastDigit = n % 10;

            // Append it to the reversed number
            revNum = revNum * 10 + lastDigit;

            // Remove the last digit from n
            n = n / 10;
        }

        // Return the reversed number
        return revNum;
    }
};


//driver code
int main(){
Solution obj;
//giving input
int num = 12345;
//taking output
cout<< obj.reverseNumber(num) << endl;
return 0;
}
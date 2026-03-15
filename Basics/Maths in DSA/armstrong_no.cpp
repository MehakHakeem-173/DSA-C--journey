#include<bits/stdc++.h>
using namespace std;

//class to check if the number is an armstrong
class ArmstrongChecker{
    public:

    static bool isArmstrong(int num){     //static change ArmstrongChecker.obj, obj.isarmstrong to (RmstrongChecker::isarmstrong(num))
        //convert number to string length
        int k = to_string(num).length();
        int sum = 0;
         //copy so that the originol number exist for comparison while we destroy the copy
        int n = num;   
        //loop for getting the lastdigits
        while(n > 0){
            //getting the last digit
         int ld = n % 10;
         //add the ld^k to sum
         sum += pow(ld , k);
         //update the number
         n = n / 10;
        }

        //return the obtained number to check if its an armstrong or not
        return sum == num;

    }
};

int main(){
    //enter the number to ckeck
    int number = 371;
    //use class method to check 
    if(ArmstrongChecker :: isArmstrong(number)){
        //if the number matches the numbr is armstrong
        cout<< number <<" is an armstrong"<<endl;
    }
    else{
        //if the numbers doesn't match if not armstrong
        cout<< number << " is not an armstrong"<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //function for pattern 20
    void pattern20(int N){
        //assigning the number of spaces
            int spaces = (2 * N - 2);
            //outer loop for number of rows 
        //number of rows is equal to 2*N-1
            for (int i=1;i<=(2*N-1);i++){
                //assigning the number of stars
                int stars = i;
                //if row number is below the midline print 2*N-i stars 
                //else print i number of stars
                if (i > N) stars = (2 * N - i);

                //inner loop for stars before the space
                for (int j=1;j<=stars;j++){
                    cout<<"*";
                }
                
                //inner loop for space between stars
                for(int j=1;j<=spaces;j++){
                    cout<<" ";
                }

                //inner loop for stars after space
                for(int j=1;j<=stars;j++){
                    cout<<"*";
                }

                //end of each row
                cout<<endl;

                //if row number is greater then N decrement space by 2 
                if (i < N){
                    spaces -= 2;
                }
                //else increment the spaces by 2
                else{
                    spaces += 2;
                }
            }
    }
};

int main(){
    //create solution obj
    Solution obj;
    //size of pattern
    int N = 6;
    //calling the function of pattern
    obj.pattern20(N);
    return 0;
}
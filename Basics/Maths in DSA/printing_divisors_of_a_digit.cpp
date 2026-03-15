#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> getDivisors(int N){
        vector<int> res;
        for (int i=1;i<=N/2;i++){
            if(N%i==0){
                res.push_back(i);
            }
        }
        return res;
    }
    
};

int main(){
    Solution obj;
    int N = 36;
    vector<int> result = obj.getDivisors(N);
    cout<<"Divisors of" << N <<": ";
    for (int val : result){
        cout<< val<< " ";
    }
    return 0;
}
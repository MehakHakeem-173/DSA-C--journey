#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int countNumbers(int N){
        int sum = 0;
        for (int i=1;i<=N;i++){
            sum += i;
        }
        return sum;
    }
};

int main(){
    Solution obj;
    int N;
    cin >> N;
    int result = obj.countNumbers(N);
    cout << result << endl;
}
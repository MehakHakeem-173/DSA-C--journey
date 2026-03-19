#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find sum of first N natural numbers using loop
    int sumOfNaturalNumbers(int N) {
        if(N == 1){
            return 1;
        }
        return N + sumOfNaturalNumbers(N - 1);
    }
};

// Driver code
int main() {
    // Create object of Solution class
    Solution obj;

    // Input value for N
    int N;
    cin >> N;

    // Call the function and store the result
    int result = obj.sumOfNaturalNumbers(N);
    cout << result << endl;
    return 0;
}
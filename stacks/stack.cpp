#include<bits/stdc++.h>
using namespace std;

int main(){
    ArrayStack stack;
    vector<string> commands = {"ArrayStack", "push", "top", "top", "pop", "isempty"};
    vector<vector<int>> input = {{}, {5}, {10}, {}, {}, {}};

    for(size_t i=0; i<commands.size(); ++i) {
        if (commands[i] == "push") {
            stack.push(input[i][0]);
            cout << "null ";
        }
    }
}
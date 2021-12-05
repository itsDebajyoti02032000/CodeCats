#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string interpret(string command) {
        string result;
        for (int i = 0; i < command.length();) {
            if (command[i] == 'G') {
                result += 'G', ++i;
            } else if (command[i + 1] == ')') {
                result += 'o', i += 2;
            } else {
                result += "al", i += 4;
            }
        }
        return result;
    }
};
int main()
{
    string command;
    Solution obj;
    cout<<"Input: ";
    cin>>command;
    cout<<"Output: "<<obj.interpret(command);
    return 0;
}

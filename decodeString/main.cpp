#include <iostream>
#include <string>
#include <stack>

using namespace std;
class Solution {
public:
    string decodeString(string s) {
        stack<string> strStack;
        stack<int> numStack;
        int k = 0;
        string str;
        for(char c : s){
            if(isdigit(c)){
                k = k * 10 + c - '0';
            }else if(c == '['){
                numStack.push(k);
                k = 0;
                strStack.push(str);
                str = "";
            }else if(c == ']'){
                int repeatTimes = numStack.top(); numStack.pop();
                string temp = str;
                str = strStack.top(); strStack.pop();
                for(int i = 0; i < repeatTimes; i++){
                    str += temp;
                }
            }else{
                str += c;
            }
        }
    }
};
int main() {
    string s = "2[a3[c]]ef";
    Solution sol;
    sol.decodeString(s);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

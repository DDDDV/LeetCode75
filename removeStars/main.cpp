#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        stack<char> stk;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '*'){
                if(stk.empty()){
                    return "";
                }
                stk.pop();
            }else{
                stk.push(s[i]);
            }
        }
        string result;
        while(!stk.empty()){
            result.insert(0, 1, stk.top());
            stk.pop();
        }
        return result;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

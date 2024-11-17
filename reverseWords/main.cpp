#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string temp;
        stack<string> reverseWord;
        while(getline(ss, temp, ' ')){
            if(temp == ""){
                continue;
            }
            reverseWord.push(temp);
        }
        temp = "";
        while(!reverseWord.empty()){
            temp += reverseWord.top();
            reverseWord.pop();
            temp += ' ';
        }
        return temp.substr(0, temp.size() - 1);

    }

};
int main() {
    string s = "  hello world  ";
    Solution so;
    s = so.reverseWords(s);
    std::cout << "Hello World!" << std::endl;
    return 0;
}

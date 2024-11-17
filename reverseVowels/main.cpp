#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
        int length = s.size();
        cout << length << endl;
        int begin = 0, end = length - 1;
        while(begin < end){
            if(!isVowels(s[begin])){
                ++begin;
                continue;
            }
            if(!isVowels(s[end])){
                --end;
                continue;
            }
            char temp;
            temp = s[begin];
            s[begin] = s[end];
            s[end] = temp;
            ++begin;
            --end;
        }
        return s;
    }
private:
    bool isVowels(char c){
        string vowels = "aeiouAEIOU";
        if(vowels.find(c) != string::npos){
            return true;
        }
        return false;
    }
};

int main() {
    string s = "hello";
    Solution so;
    so.reverseVowels(s);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

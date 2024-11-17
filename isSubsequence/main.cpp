#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i_s = 0;
        int i_t = 0;
        while(i_s < s.size()) {
            if(s[i_s] == t[i_t]){
                i_s++;
                i_t++;
                continue;
            }
            if(i_t + 1 < t.size()){
                i_t++;
            }else{
                break;
            }
        }
        if(i_s == s.size()){
            return true;
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

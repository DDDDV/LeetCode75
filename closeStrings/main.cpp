#include <iostream>
#include <string>
#include <set>
#include <map>


using namespace std;
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char, int> w1, w2;
        for(char c : word1){
            auto it = w1.find(c);
            if(it != w1.end()){
                it->second += 1;
                continue;
            }
            w1[c] = 1;
        }
        for(char c : word2){
            auto it = w2.find(c);
            if(it != w2.end()){
                it->second += 1;
                continue;
            }
            w2[c] = 1;
        }
        if(w1.size() != w2.size()){
            return false;
        }
        for(auto it : w1){

        }

    }
};

int main() {
    string s = "abbcaad";
    Solution t;
    t.closeStrings(s, s);
    return 0;
}

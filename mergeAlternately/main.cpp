#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int p = 0;
        int q = 0;
        string s;
        while(p != word1.size() && q != word2.size()){
            s += word1.at(p);
            s += word2.at(q);
            p++;
            q++;
        }
        while(p != word1.size()){
            s += word1.at(p);
            p++;
        }
        while(q != word2.size()){
            s += word2.at(q);
            q++;
        }
        return s;
    }
};

int main() {
    string word1 = "ab";
    string word2 = "pqrs";
    Solution s;
//    string r = s.mergeAlternately(word1, word2);
//    cout << r << endl;

    string w = "abc";
    cout << "w.size() = " <<w.size() << endl;
    cout << "w.length() = " << w.length() << endl;
    return 0;
}

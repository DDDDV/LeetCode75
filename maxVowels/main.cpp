#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;
        int maxCount = 0;
        int i;
        int head = 0;
        for(i = 0; i < k; i++){
            if(count_si(s[i])){
                count ++;
            }
        }
        int max_sub_str = 0;
        maxCount = count;
        max_sub_str += 1;
        while(i < s.size()){
            if(!count_si(s[head])){
                count--;
            }
            if(count_si(s[i])){
                count++;
            }
            if(count > maxCount){
                maxCount = count;
            }else{
                max_sub_str++;
            }
        }
        return max_sub_str;

    }
private:
    bool count_si(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            return true;
        }
        return false;
    }
};

int main() {
    string s = "abciiidef";
    Solution so;
    so.maxVowels(s, 3);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

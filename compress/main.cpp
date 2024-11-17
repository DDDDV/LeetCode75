#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>

using namespace std;

class Solution {
public:
    int compress(std::vector<char>& chars) {
        int read = 0;
        int write = 0;
        int n = chars.size();
        while(read < n){
            int count = 0;
            char current = chars[read];
            while(read < n && current == chars[read]){
                read++;
                count++;
            }
            chars[write++] = current;
            if(count > 1){
                for(char c : to_string(count)){
                    chars[write++] = c;
                }
            }
        }
        return write;
    }
};

int main() {
    vector<char> chars{'A', 'A', 'A', 'B', 'B', 'C', 'C', 'C'};
    Solution s;
    s.compress(chars);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

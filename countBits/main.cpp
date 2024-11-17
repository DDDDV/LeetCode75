#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define MAX_N (pow(2, 20)-1)

class Solution {
public:
    vector<int> countBits(int n) {
        bitset<32> max_bit(MAX_N);
        vector<int> result;
        for(int i = 0; i <= n; i++){
            bitset<32> bit_i(i);
            result.push_back((bit_i & max_bit).count());
        }
    }
};

int main() {
    Solution s;
    s.countBits(5);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

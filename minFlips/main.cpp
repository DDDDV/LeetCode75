#include <iostream>

class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count_flips = 0;
        while(a != 0 || b != 0 || c != 0){

            int lowestBit_a = a & 1;
            int lowestBit_b = b & 1;
            int lowestBit_c = c & 1;
            if((lowestBit_a | lowestBit_b) != lowestBit_c){
                if(lowestBit_c == 0 && (lowestBit_a & lowestBit_b) != 0){
                    count_flips += 1;
                }
                count_flips += 1;
            }else if((lowestBit_a & lowestBit_b) != lowestBit_c){
//                count_flips += 1;
            }else{

            }
            a = a >> 1;
            b = b >> 1;
            c = c >> 1;
        }
        std::cout << count_flips << std::endl;
        return count_flips;
    }
};

int main() {
    Solution s;
    s.minFlips(4, 2, 7);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

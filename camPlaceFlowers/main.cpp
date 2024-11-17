#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int flowerPos = 0;
        vector<int> flowerbedCopy(flowerbed);

        for(auto flowerIsPlanted : flowerbed){
            if(flowerIsPlanted == 1){
//                flowerbedCopy[flowerPos] = 1;
                if(flowerPos - 1 >= 0){
                    flowerbedCopy[flowerPos - 1] = 1;
                }
                if(flowerPos + 1 <= flowerbed.size() - 1){
                    flowerbedCopy[flowerPos + 1] = 1;
                }
            }
            ++flowerPos;
        }
        int count = 0;
        for(auto flowerIsPlanted : flowerbedCopy){
            if(flowerIsPlanted == 0){
                ++count;
            }
        }
        if(count >= n){
            return true;
        }else{
            return false;
        }
    }
};
int main() {
    vector<int> flowerbed{1, 0, 0, 0, 1};
    int n = 1;
    Solution s;
    s.canPlaceFlowers(flowerbed, n);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

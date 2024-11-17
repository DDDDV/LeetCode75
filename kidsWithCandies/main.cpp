#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int biggest = 0;
//        int flag = 0;
        for(auto child : candies){
            if(child > biggest){
//                ++flag;
                biggest = child;
            }
        }
        for(auto child : candies){
            if((child + extraCandies) >= biggest){
                result.push_back(true);
            }else{
                result.push_back(false);
            }
        }
//        cout << biggest << endl;
        return result;
    }
};

int main() {
    vector<int> childs{2, 3, 5, 1, 3};
    int extraCandies = 3;
    Solution s;
    s.kidsWithCandies(childs, extraCandies);
    std::cout << "Hello, World!" << std::endl;

    return 0;
}

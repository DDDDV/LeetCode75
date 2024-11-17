#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int sum = 0;
        int i = 0;
        do{
            if(i >= nums.size()){
                break;
            }
            int pair = 0;
            int pair_a, pair_b;
            int value_a = nums[i];
            int value_b = k - nums[i];
            pair_a = std::count(nums.begin(), nums.end(), nums[i]);
            pair_b = std::count(nums.begin(), nums.end(), (k - nums[i]));
            pair = std::min(pair_a, pair_b);
            if(value_a == value_b){
                pair = pair / 2;
            }

            if(pair == 0){
                i++;
                continue;
            }

            sum += pair;
            for(int j = 0; j < pair; j++){
                int first = nums[i];
                int last = k - nums[i];
                nums.erase(std::remove(nums.begin(), nums.end(),first), nums.end());
                nums.erase(std::remove(nums.begin(), nums.end(),last), nums.end());
            }
        }
        while(true);
        return sum;
    }
};

int main() {
    vector<int> nums{3,1,3,4,3};
    Solution s;
    s.maxOperations(nums, 6);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

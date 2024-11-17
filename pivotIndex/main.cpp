#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left_sum = 0;
        int right_sum = 0;
        for(int i = 0; i < nums.size(); i++){
            right_sum += nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            left_sum += nums[i];
            if(right_sum == left_sum){
                return i;
            }
            right_sum -= nums[i];

        }
        return -1;
    }
};
int main() {
    vector<int> nums{1,7,3,6,5,6};
    Solution s;
    s.pivotIndex(nums);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

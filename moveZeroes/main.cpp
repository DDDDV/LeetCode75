#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        while(fast < nums.size()){
            if(nums[fast] == 0){
                fast++;
                continue;
            }
            nums[slow] = nums[fast];
            slow++;
            fast++;
        }
        while(slow < nums.size()){
            nums[slow] = 0;
            slow++;
        }
    }
};

int main() {
    vector<int> nums{1,2,3,0,0,5};
    Solution s;
    s.moveZeroes(nums);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

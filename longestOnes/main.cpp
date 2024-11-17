#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int zeros_count = 0;
        int max_length = 0;
        for(int right = 0; right < nums.size(); right++){
            if(nums[right] == 0){
                zeros_count++;
            }
            while(zeros_count > k){
                if(nums[left] == 0){
                    zeros_count--;
                }
                left++;
            }
            max_length = max(max_length, right - left + 1);
        }
        return max_length;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    s.longestOnes(nums, 2);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

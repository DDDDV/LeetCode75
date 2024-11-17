#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    void rotateitem(vector<int>& nums, int start, int end){
        while(start < end){
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        if(nums.size() <= 1 || k <= 0){
            return;
        }
        k = k % nums.size();
        if(nums.size() == 2){
            if(k % 2 == 0){
                return;
            }else{
                int temp = nums[0];
                nums[0] = nums[1];
                nums[1] = temp;
            }
        }else{
            rotateitem(nums, 0, nums.size() - 1);
            rotateitem(nums, 0, k - 1);
            rotateitem(nums, k, nums.size() - 1);
        }

    }
};

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    Solution s;
    s.rotate(nums, 3);
    for(auto it : nums){
        cout << it << "\t";
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

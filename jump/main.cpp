#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int fartest = 0;
        int currentEnd = 0;
        int jumps = 0;
        for(int i = 0; i < n - 1; i++){
            fartest = max(fartest, i + nums[i]);
            if(i == currentEnd){
                jumps++;
                currentEnd = fartest;
            }
        }
        return jumps;
    }
};

int main() {
    vector<int> nums {2,3,1,1,4};
    Solution s;
    s.jump(nums);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

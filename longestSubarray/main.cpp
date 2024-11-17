#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max = 0;
        bool neverDel = true;
        for(int left = 0; left < nums.size(); left++){
            int right = left;
            int sum = 0;
            int del = 1;
            while(right < nums.size()){
                if(nums[right] == 0){
                    if(del == 0){
                        break;
                    }
                    del -= 1;
                    neverDel = false;
                    right++;
                }else{
                    sum++;
                    right++;
                }
            }
            max = std::max(max, sum);
        }
        if(neverDel)
            max -= 1;
        return max;
    }
};
int main() {
    vector<int> nums{1,1,0,1};
    Solution s;
    s.longestSubarray(nums);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

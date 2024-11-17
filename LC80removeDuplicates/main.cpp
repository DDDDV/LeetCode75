#include <iostream>
#include <vector>
#include <cassert>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        assert(nums.size() >= 0);
        if(nums.size() == 1 || nums.size() == 2){
            return nums.size();
        }
        for(auto num = nums.begin(); num != nums.end();){
            auto current = num;
            auto cursor = current + 1;
            int times = 1;
            while(cursor != nums.end() && *cursor == *current){
                ++cursor;
                times++;
            }
            if(times >= 2){
                num = nums.erase(current + 2 , cursor);
            }else{
                num++;
            }
        }
        return nums.size();
    }
};

int main(){
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    Solution s;
    s.removeDuplicates(nums);
}
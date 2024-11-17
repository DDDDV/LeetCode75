#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int j = 1;
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i] == nums[i - 1]){
                count++;
            }
            else{
                count = 0;
            }
            if(count <= 2){
                nums[j] = nums[i];
                j++;
            }

        }
        return j;
    }
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
    }
private:
    void reverse(vector<int>& nums, int start, int end){
        while(start < end){
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
};
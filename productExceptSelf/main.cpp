#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int sum = 1;
        int sum_except0 = 1;
        int sumOfZero = 0;

        for(auto num : nums){
            if(num == 0){
                if(!sumOfZero){
                    sum_except0 = sum;
                }else{
                    sum_except0 = 0;
                }
                ++sumOfZero;
                sum = 0;
                continue;
            }
            if(!sumOfZero){
                sum *= num;
            }else{
                sum_except0 *= num;
            }
        }
        if(sumOfZero > 1){
            for(int i = 0; i < nums.size(); i++){
                result.push_back(0);
            }
        }else if(sumOfZero == 1){
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] != 0){
                    result.push_back(0);
                }else{
                    result.push_back(sum_except0);
                }
            }
        }else{
            for(auto num : nums){
                result.push_back(sum / num);
            }
        }
        return result;
    }
};

int main() {
    vector<int> nums{3,4,-1,2};
    Solution s;
    s.productExceptSelf(nums);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

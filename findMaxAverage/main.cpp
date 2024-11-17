#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int max = 0;
        int head = 0, tail = 0;
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        max = sum;
        head = 0;
        tail = k;
        while(tail < nums.size()){
            sum -= nums[head];
            sum += nums[tail];
            if(sum > max){
                max = sum;
            }
            head++;
            tail++;
        }
        return (max+0.0)/k;
    }
};

int main() {
    vector<int> nums{1,12,-5,-6,50,3};
    Solution s;
    double result = s.findMaxAverage(nums, 4);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

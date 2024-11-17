#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size() <=2){
            return (min(height[0], height[1]));
        }
        int maxArea = 0;
        for(int slow = 0; slow < height.size() - 1; slow++){
            for(int fast = slow + 1; fast < height.size(); fast++){

                if(min(height[slow], height[fast]) * (fast - slow) > maxArea){
                    maxArea = min(height[slow], height[fast]) * (fast - slow);
                }
            }
        }
        return maxArea;
    }
};

int main() {
    vector<int> input {1,8,6,2,5,4,8,3,7};
    Solution s;
    s.maxArea(input);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

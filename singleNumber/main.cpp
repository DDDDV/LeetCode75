#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single = 0;
        for(int num:nums){
            single = single ^ num;
        }
        return single;
    }
};


int main(){
    Solution s;
    vector<int> nums = {1, 2, 2};
    cout << s.singleNumber(nums) << endl;
}
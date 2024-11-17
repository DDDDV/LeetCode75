#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;


class Solution {
public:
    bool canJump(vector<int>& nums) {
        //用一个队列保存要遍历的数组
        int index = 0;

        queue<tuple<int, int>> canditate;
        canditate.push(make_tuple(index, nums[index]));
        while(!canditate.empty()){

        }

    }
private:
    tuple<int, int> element;
};
int main() {

    vector<int> nums{2,5,0,0};
    Solution s;
    s.canJump(nums);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

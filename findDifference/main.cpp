#include <iostream>
#include <vector>
#include <set>


using namespace std;
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> nums1_s(nums1.begin(), nums1.end());
        set<int> nums2_s(nums2.begin(), nums2.end());
        vector<vector<int>> res;
        vector<int> _nums1;
        vector<int> _nums2;
        for(int n : nums1_s){
            if(nums2_s.count(n) == 0){
                _nums1.push_back(n);
            }
        }
        for(int n : nums2_s){
            if(nums1_s.count(n) == 0){
                _nums2.push_back(n);
            }
        }
        res.push_back(_nums1);
        res.push_back(_nums2);
        return res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

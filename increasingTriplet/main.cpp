#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        for(int num : nums){
            if(num <= MAX1){
                MAX1 = num;
            }else if(num <= MAX2){
                MAX2 = num;
            }else{
                return true;
            }
        }
        return false;
    }
private:
    int MAX1 = INT_MAX;
    int MAX2 = INT_MAX;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

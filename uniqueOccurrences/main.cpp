#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> m;
        for(int i = 0; i < arr.size(); i++){
            m[arr[i]] = 0;
        }
        for(int i = 0; i < arr.size(); i++){
            m[arr[i]] += 1;
        }
        unordered_set<int> unique;
        for(auto member : m){
            if(unique.find(member.second) != unique.end()){
                return false;
            }else
                unique.insert(member.second);
        }
        return true;
    }
};
int main() {
    vector<int> arr{1,1,1,2,2,3};
    Solution s;
    s.uniqueOccurrences(arr);
    return 0;
}

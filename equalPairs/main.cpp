#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<string, int> rowMap;
        for(int i = 0; i < grid.size(); i++){
            string row;
            for(int j = 0; j < grid[i].size(); j++){
                row += to_string(grid[i][j]) + ",";
            }
            rowMap[row]++;
        }
        int count = 0;
        for(int j = 0; j < grid.size(); j++){
            string col;
            for(int i = 0; i < grid[j].size(); i++){
                col += to_string(grid[j][i]) + ",";
            }
            if(rowMap.find(col) != rowMap.end()){
                count += rowMap.find(col)->second;
            }
        }
        return count;
    }
};
int main() {
    vector<vector<int>> grid{{11,1},{1,11}};
    Solution s;
    s.equalPairs(grid);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

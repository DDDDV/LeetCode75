#include <iostream>
#include <vector>
#include <stack>

using namespace std;
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        for(int i = 0; i < asteroids.size(); i++){
            if(s.empty()){
                s.push(asteroids[i]);
                continue;
            }
            int top = s.top();
            //符号相同，直接入栈
            if((top ^ asteroids[i]) >= 0){
                s.push(asteroids[i]);
                continue;
            }else{
                if(abs(top) > abs(asteroids[i])){
                    continue;
                }
                if(abs(top) == abs(asteroids[i])){
                    s.pop();
                    continue;
                }
                while(!s.empty() && abs(s.top()) < abs(asteroids[i])){
                    s.pop();
                }
                if(s.empty()){
                    s.push(asteroids[i]);
                }
            }
        }
        vector<int> result;
        while(!s.empty()){
            result.insert(result.begin(), s.top());
            s.pop();
        }
        return result;
    }
};
int main() {
    vector<int> asteroids{10,2,-5};
    Solution s;
    s.asteroidCollision(asteroids);
    return 0;
}

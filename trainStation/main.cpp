#include <iostream>
#include <vector>

using namespace std;

#define MAX_D 100001

int main(int argc, char** argv){
    vector<int> diff(MAX_D, 0);
    int n = 0;
    cin >> n;
    int x = 0, y = 0;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        diff[x]++;
        diff[y]--;
    }
    int max = 0;
    int current = 0;
    for(int i = 1; i < MAX_D; i++) {
        current += diff[i];
        max = std::max(current, max);
    }
}
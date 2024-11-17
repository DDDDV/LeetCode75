#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n = 0;
    cin >> n;
    vector<int> candys;
    vector<int> diff(101, 0);
    for(int i = 0; i < n; i++){
        int candy = 0;
        cin >> candy;
        candys.push_back(candy);
    }
    int min = 101;
    bool flag = false;
    int times = 0;
    while(true){
        min = 101;
        flag = false;
        for(int i = 0; i < n; i++){

            if(candys[i] >0 && candys[i] < min){
                min = candys[i];
                flag = true;
            }
        }
        if(flag == false){
            break;
        }
        diff[0] -= min;
        diff[n] += min;
        for(int i = 1; i < n; i++){
            diff[i] += diff[i - 1];
        }
        for(int i = 0; i < n; i++){
            candys[i] += diff[i];
        }
        times++;
        fill(diff.begin(), diff.begin() + n, 0);

    }
    cout << times;
    return 0;
}

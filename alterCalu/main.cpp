#include <iostream>
#include <vector>

using namespace std;
int main() {
    int MOD = 1000000007;
    vector<int> v;
    int size = 0;
    cin >> size;
    for(int i = 0; i < size; i++){
        int input = 0;
        cin >> input;
        v.push_back(input);
    }
    int count = 1;
    int flag = 0;
    while(true){
        for(int i = 0; i < size - count; i++){
            if(flag == 0){
                v[i] = v[i] + v[i+1];
                flag = 1;
            }else{
                v[i] = v[i] - v[i+1];
                flag = 0;
            }
        }
        count += 1;
        if(count == size){
            int num = v[0];
            num = ((num % MOD) + MOD) % MOD;
            cout << num;
            break;
        }
    }
    return 0;
}

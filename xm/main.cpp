#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    int gem_n = 0;
    int op = 0;
    cin >> gem_n;
    cin >>op;
    vector<int> gem_list;
    for(int i = 0; i < gem_n; i++){
        gem_list.push_back(i+1);
    }

    for(int i = 0; i < op; i++){
        int a = 0;
        int b = 0;
        int c = 0;
        cin >> a;
        cin >> b;
        cin >> c;
        --a;
        --b;

        int gem = gem_list[a];
        gem_list.erase(gem_list.begin() + a);
        if(op == 0){
            gem_list.insert(gem_list.begin() + b + 1, gem);
        }else{
            gem_list.insert(gem_list.begin() + b , gem);
        }
    }
    for(int i = 0; i < gem_n; i++){
        cout << gem_list[i] << " ";
    }
    cout << endl;




    return 0;
}

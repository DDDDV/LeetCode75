#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;
int main() {
    vector<char> v;
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        v.push_back(str[i]);
    }
    for(int i = 0; i < v.size(); i++){
        char temp = v[i];
        v.erase(v.begin() + i);
        v.push_back(temp);

    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
    }
    cout << endl;

    return 0;
}

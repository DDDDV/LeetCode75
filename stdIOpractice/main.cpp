#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <stdio.h>

using namespace std;
int main() {
    while(true){
        string input;
        set<string> s;
        getline(cin, input);
        stringstream ss(input);
        string temp;
        while(getline(ss, temp,',')){
            s.insert(temp);
        }
        for(auto it = s.begin(); it != s.end(); ){
            cout << *it;
            it++;
            if(it != s.end()){
                cout << ",";
            }
        }
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int func(const string &str, const string &s1, const string &s2){
    int n = str.length();
    int left = 0;
    int i1 = 0;
    while(left < n && i1 < s1.length()){
        if(str[left] == s1[i1]){
            i1++;
        }
        left++;
    }
    if(i1 < s1.length()){
        return -1;
    }

    int right = n - 1;
    int i2 = s2.length() - 1;
    while(right >= 0 && i2 >= 0){
        if(str[right] == s2[i2]){
            i2--;
        }
        right--;
    }
    if(i2 >= 0){
        return -1;
    }



}
int main() {
    string str;
    string s1;
    string s2;
    cin >> str;
    cin >> s1;
    cin >> s2;

    return 0;
}

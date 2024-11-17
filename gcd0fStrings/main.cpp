#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 != str2 + str1){
            return "";
        }
        int a = 0, b = 0;
        if(str1.size() > str2.size()){
            a = str1.size();
            b = str2.size();
            return str1.substr(0, gcd(a, b));
        }else{
            a = str2.size();
            b = str1.size();
            return str2.substr(0, gcd(a, b));
        }
    }
private:
    int gcd(int a, int b){
        return b == 0 ? a : gcd(b, a % b);
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

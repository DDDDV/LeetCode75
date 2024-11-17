#include <string>
#include <iostream>
#include <stack>

using namespace std;

void removeDoubleChar(const string &str){
    stack<char> st;
    for(char c : str){
        if(st.top() == c){
            st.pop();
        }else{
            st.push(c);
        }
    }

}

int main(int argc, char** argv){
    string input;
    getline(cin, input);
    removeDoubleChar(input);
}
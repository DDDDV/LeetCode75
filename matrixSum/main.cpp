#include <iostream>
#include <vector>
using namespace std;

void changeRow(vector<vector<int>> &matrix, int select, int val){
    for(int i = 0; i < matrix.size(); i++){
        matrix[select][i] = val;
    }
}
void changeColum(vector<vector<int>> &matrix, int select, int val){
    for(int i = 0; i < matrix.size(); i++){
        matrix[i][select] = val;
    }
}
int getSum(const vector<vector<int>> &matrix){
    int sum = 0;
    for()
}
int main() {
    int n = 0;
    cin >> n;
    vector<vector<int>> matrix(0, vector<int>(n, 0));
    int m = 0;
    int no;
    cin >> m >> no;

    for(int i = 0; i < m; i++){
        int type;
        int select;
        int val;
        cin >> type >> select >> val;
        if(type == 0){

        }else{

        }
    }
    return 0;
}

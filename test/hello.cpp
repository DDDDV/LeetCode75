#include <iostream>

int main(){
    auto i = std::make_unique<int[]>(19);
    i[0] = 1;
    std::cout<< i[0] << std::endl;
}
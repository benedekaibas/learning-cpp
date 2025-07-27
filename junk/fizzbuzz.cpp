#include <iostream>
#include <vector>

int main() {
    std::vector<int> array;
    int i = 0;

    while(i <= 10) {
        //++i;
        array.push_back(i++);
    }

    for(int y : array){
        std::cout << y << std::endl;
    }
}

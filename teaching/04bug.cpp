#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3};
    int* p = &nums[0];
    nums.push_back(4);
    std::cout << *p << "\n";
    nums.clear();
    std::cout << *p << "\n";
}

/*
   Since the push_back operation causes the vector’s memory location to change because it becomes a new vector, 
   the pointer ends up pointing to an old address. We should perform the push_back first and then create the pointer.
*/

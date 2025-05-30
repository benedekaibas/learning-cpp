#include <iostream>
#include <vector>

std::vector<int> FillArray(){
  std::vector<int> arr;
  arr.push_back(1);

  return arr;
}

void PrintResult(std::vector<int>& display){
  for(int i : display){
    std::cout << i << std::endl;
  }
}

void WhileArray(){
  int i = 0;
  int N = 15;

  while(i < N){
    std::cout << i++ << std::endl;
  }
}

void GetChar(){
  char c = 0x34;
  char* ptr = &c;
  std::cout << *ptr << std::endl;
}
int main(){
  std::vector<int> result =  FillArray();

  PrintResult(result);
  WhileArray();
  GetChar();
}

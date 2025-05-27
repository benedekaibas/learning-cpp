#include <iostream>

class ModifyVaribale{
public:
  int x = 10;
  ModifyVaribale(int val){
    val = 10;
  }

  ModifyVaribale(ModifyVaribale& val_modify){
    x = val_modify.x;
  }
};

int main(){
  ModifyVaribale output(10);
  std::cout <<  output.x;
}

#include <iostream>
#include <vector>

class Animal{

public:
  std::string name;
  int age;

  Animal(){
    name = "Dog";
    age  = 9;
  }
  void MakeSound(){
    std::cout << "Sound of a " << name << std::endl;
  }

};


class Lion: public Animal{
public:
  void MakeSound(){
    std::cout << "Roar!" << std::endl;
  }
  Lion(){
    MakeSound();
  }
};

class Elephant: public Lion{
public:
  void MakeSound(){
    std::cout << "Trumpet!" << std::endl;
  }
  Elephant(){
    MakeSound();
  }
};

int main(){
  //Animal* animals;
  Lion* lion = new Lion();
  Elephant* elephant = new Elephant();

  std::vector<Animal*> animals;
  animals.push_back(lion);
  animals.push_back(elephant);

  Animal sound;

  for(auto i: animals){
    sound.MakeSound();
  }
};

#include <iostream>
#include <vector>

class Bmw{
public:
  void GermanCars(){
    std::cout << "BMW" << std::endl;
  }
};

class Mercedes : public Bmw{
public:
  void GermanCars(){
    std::cout << "Mercedes" << std::endl;
  }
};

//using arrays for storing elements and just make one call in the main function
//but also getting acces from the base class

class CarTypes{
public:
  std::vector<std::string> cars;

  std::vector<std::string> SwedishCars(){
    cars.push_back("Volvo");
    cars.push_back("Saab");
    std::cout << "Function from base class" << std::endl;
    return cars;
}};

class ReturnCar : public CarTypes{
public:
  std::vector<std::string> SwedishCars(){
    cars.push_back("Scania");
    return cars;
  };

};

int main(){
  Bmw bmw;
  Mercedes mercedes;
  mercedes.GermanCars();
  bmw.GermanCars();

  ReturnCar car;
  car.SwedishCars();

  for(auto i: car.SwedishCars()){
    std::cout << i << std::endl;
  }

};

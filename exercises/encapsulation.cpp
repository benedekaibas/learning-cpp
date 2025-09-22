#include <iostream>

class Person {
private:
  int socialID;
  std::string name;

public:
  Person(std::string n, int id) : name(n), socialID(id) {};

  std::string getName() const {
    return name;
  }

  void setName(std::string newName) {
    name = newName;
    std::cout << newName;
  }

  bool validateID() {
    if(socialID < 0 || socialID > 1001) {
      return "Invalid ID!";
    } else {
      std::cout << "Valid ID!" << "\n";
      return socialID;
    }
  }
};

int main() {
  Person personObj("Benedek", 15);
  personObj.validateID();
  personObj.getName();
  personObj.setName("Adam");

} 

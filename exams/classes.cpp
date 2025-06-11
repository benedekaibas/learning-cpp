#include <iostream>

class Book{
private:
  std::string author;
  std::string title;
  int pages;
public:
  Book(){
    author = "Bjarne Stroustrup";
    title = "A Tour of C++";
    pages = 299;
  };

  Book(std::string& name_author, std::string& book_title){
    name_author = author;
    book_title = title;

    std::cout << name_author << "Called through constructor" << std::endl;
    std::cout << book_title << "Called through constructor" << std::endl;
  }
  void PrintInfo(){

    std::cout << author << std::endl;
    std::cout << title << std::endl;
    std::cout << pages << std::endl;
  }
};

int main(){
  Book book;
  book.PrintInfo();

  return 0;
}

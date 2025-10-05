#include <iostream>

/*
8. Nem konstans char* literálra

Feladat:
Próbálj ki egy ilyet: char* s = "Hello";

Miért kapsz fordítási hibát?

Javítsd úgy, hogy helyes legyen (const char*).
*/

int main() {
  char s = 'c';
  char* s_ptr = &s;
}


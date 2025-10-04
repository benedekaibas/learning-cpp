#include <iostream>

/*
4. Értékadás vs. Memóriacím másolás

Feladat:
Írj két függvényt:

amely by-value paraméterátadásként másol egy egész számot,

amely pointerrel (int*) adja át a paramétert.

Hasonlítsd össze, hogyan változik a változó értéke a két esetben.
*/

int* szam_ptr(int* input_szam) {
  return input_szam;
}

int szam_ertek(int& input_szam) {
  return input_szam;
}

int main() {
  int szam = 10;
  int* szam_by_ptr = &szam;
  std::cout << szam_ertek(szam) << "\n";
  std::cout << szam_ptr(szam_by_ptr);
}

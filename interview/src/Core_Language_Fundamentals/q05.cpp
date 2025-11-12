#include <iostream>

// What happens if you don’t initialize a local variable?

int main() {
  int addition; // addition does not have a value
  return addition; // because addition does not have a value the return statement will return garbage data.
}

/*
  Even though we have a variable declared as the type int, but we did not initialized it in our code it will lead to
  undefined behavior. Once the local variable is declared we can leave it uninitialized at the line where it was declared,
  but later in the code we must initialize a value to it.
*/

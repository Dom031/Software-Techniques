#include <iostream>

int main() {
  // num as asked by the exercise.
  double num = 2.4;
  //pointer to the num.
  double *ptrNum = &num;

  std::cout << "Variable: " << num
  << " Address: " << &num << std::endl;
  std::cout << "Pointer: " << ptrNum
  <<  " Dereference: " << *ptrNum
  << " Address: " << &ptrNum << std::endl;




  return 0;
}

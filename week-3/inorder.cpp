#include <iostream>
int main(){
  int num1, num2, num3;
  
  std::cout << "Enter three numbers: ";
  std::cin >> num1 >> num2  >> num3;

  if ((num1 > num2 && num2 > num3) ||(num1 < num2 && num2 < num3)){
    std::cout << "In order" << std::endl;
  }  else {
    std::cout << "Not in order" << std::endl;
  }
  return 0;
}

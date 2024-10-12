#include <iostream>

int main () {
  std:: string phonenum;
  std::cout << "enter a phone number with 11 digits: ";
  std::cin >> phonenum;
  
  std::cout << "The formated phone number is:(" << phonenum.substr(0,5) << ") " << phonenum.substr(5,3) << " " << phonenum.substr(8) << std::endl;

}

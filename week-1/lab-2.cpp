#include <iostream>
#include <string>

std::string phoneNumFormat (std::string phonenum, std::string separator){
  std::string formated = "(" + phonenum.substr(0,5) + ") " + phonenum.substr(5,3) + separator + phonenum.substr(8);
  return formated;
}


int main () {
  std:: string phonenum, separator;
  
  std::cout << "enter a phone number with 11 digits: ";
  std::cin >> phonenum;
 
  std::cout << "enter a separator (space os '-' preferred): ";
  std::cin >> separator;

  std::cout << "The formated phone number is: " << phoneNumFormat(phonenum, separator) << std::endl;
  return 0;
}

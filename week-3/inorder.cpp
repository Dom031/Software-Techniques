#include <iostream>
int main(){
  int a, b, c;
  
  std::cout << "Enter three numbers: ";
  std::cin >> a >> b  >> c;

  if (a > b && b > c){
    std::cout << "In order (descending)" << std::endl;
  } else if ( a < b && b < c) {
    std::cout << "In order (ascending)" << std::endl;
  } else {
    std::cout << "Not in order" << std::endl;
  }
  


  return 0;
}

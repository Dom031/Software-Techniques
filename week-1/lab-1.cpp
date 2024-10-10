#include <iostream>
#include <cmath>

int main(){
  int num1, num2;
  std::cout << "enter first number: ";
  std::cin >> num1;
  std::cout << "enter second number: ";
  std::cin >> num2;

  int sum = (num1 + num2);
  std::cout << "The sum of both numbers is " << sum << std::endl;

  int difference = (num1 - num2);
  std::cout << "The difference between " << num1 << " and " << num2 << " is " << difference  <<std::endl;

  int product = (num1 * num2);
  std::cout << "The product of " << num1 << " and " << num2 << " is " << product << std::endl;

  int distance = abs(num1 - num2);
  std::cout << "The distance between " << num1 << " and " << num2 << " is " << distance << std::endl;

  double mean = (num1 + num2) / 2.0;
  std::cout<< "The mean average of " << num1 << " and " << num2 << " is " << mean << std::endl;
    
  return 0;
}

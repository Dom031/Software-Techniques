#include <iostream> // include input/output library.
#include <numeric> // for the accumulate if I decide to use on exercise 3.
#include <algorithm> // for the std::reverse exercise 4.
#include <cstdlib> // for command line calculator to use std::atoi that takes the argument and converts to a int since the arguments are in string.

int main(int argc, char* argv[]){
  std::cout << "Please enter your age " << std::endl;
  int age;
  int finalAge = 100; 
  std::cin >> age;
  std::cout << "You will be " << finalAge << " in " << finalAge - age << " years." << std::endl;

 //------------------------------------------------------//

  int num1;
  int num2;
  char operatr;
  std::cout << "Enter first number: ";
  std::cin >> num1;
  std::cout <<  "Enter second number: ";
  std::cin >> num2;
  std::cout << "Enter operation (+, -, * , /): ";
  std::cin >> operatr;
  
  switch (operatr){
  case '+':
    std::cout << "Result: " << (num1 + num2) << std::endl;
    break;
  case '-':
    std::cout << "Result: " << (num1 - num2) << std::endl;
    break;
  case '*':
    std::cout << "Result: " << (num1 * num2) << std::endl;
    break;
  case '/':
    if (num2 != 0) {
      std::cout << "Result: " << (num1 / num2) << std::endl;
    } else {
      std::cout << "Error: Division by zero is not allowed" << std::endl;
    }
    break;
  default:
    std::cout << "Invalid operation." << std::endl;
    break;
  }

 //------------------------------------------------------//

  const int SIZE = 5; 
  int myArr[SIZE];
  int counter = 0;
  int input;
  
  //loop to ask for an input for the size of the array.
  while (SIZE > counter){
    std::cout<< "Enter an integer(0 - 10): ";
    std::cin >> input;
  
  //validates the input 
    if (input >= 0 && input <= 10){
      myArr[counter] = input;
      counter ++;

    } else {
      std::cout << "Invalid input. Try again. \n";
    }
  }
  int sum = 0;
  int avg = 0;
    std::cout << "Array Elements: ";
    for (int i = 0; i < SIZE; i++) {
      sum += myArr[i];
      avg = sum / SIZE;
      std::cout << myArr[i] << " " << std::endl;
    }

    std::cout << "Total of the Array: " << sum << std::endl;
    std::cout << "Average  of the Array: " << avg << std::endl;

  //------------------------------------------------------//

    std:: string rtext;
    std::cout<< "Enter a word" << std::endl;
    std::cin >> rtext;
    std::reverse(rtext.begin(), rtext.end());
    std::cout << "Reversed word: " << rtext << std::endl; 

//------------------------------------------------------//

    int n1, n2, n3;
    std::cout << " Enter three numbers: ";
    std::cin >> n1 >> n2 >>  n3;

    if (n1 > n2 && n1 > n3){
      std::cout << "Biggest Number: " << n1 << std::endl;
    } else if (n2 > n1 && n2 > n3){
      std::cout << "Biggest number: " << n2 << std::endl;
    } else {
      std::cout << "Biggest number: " << n3 << std::endl;
    }

 //------------------------------------------------------//
    
    int n4;
    int remainder;
    std::cout << "Enter a number: ";
    std::cin >> n4;

    remainder = n4 % 2;

    if (remainder == 0){
      std::cout << n4 << " is even" << std::endl;
    } else {
      std::cout << n4 << " is odd" << std::endl; }

 //------------------------------------------------------//

      if(argc == 4) {
  int n5 = std::atoi(argv[1]);
  int n6 = std::atoi(argv[2]);
  char sign = argv [3][0];

  switch (sign){
  case '+':
    std::cout << "Result: " << (n5 + n6) << std::endl;
    break;
  case '-':
    std::cout << "Result: " << (n5 - n6) << std::endl;
    break;
  case '*':
    std::cout << "Result: " << (n5 * n6) << std::endl;
    break;
  case '/':
    if (n6 != 0) {
      std::cout << "Result: " << (n5 / n6) << std::endl;
    } else {
      std::cout << "Error: Division by zero is not allowed" << std::endl;
    }
    break;
  default:
    std::cout << "Invalid operation." << std::endl;
    break;
  }
 
 }		      
    
  return 0;
}

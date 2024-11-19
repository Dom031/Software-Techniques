/**
 * isprime.cpp
 *
 * Ask the user for an integer and output whether or not the number
 * provided is a prime number.
 *
 * Created: 15.38pm Monday, 21 September 2020
 * Last updated: 15.22pm Friday, 08 September 2023
 *
 * Author: Barry D. Nichols <B.Nichols@herts.ac.uk>
 **/
#include <iostream>

int main()
{
  int number;
  int counter;
  std::cout << "Enter an integer: ";
  std::cin >> number;

  // test divisors of number, if a divisor other than 1 and number is
  // found, then number is not prime.
  bool isPrime = true;
  for (int i = 1; i < number; ++i)
    if (!number % i == 0)
      isPrime = false;
 

  if (isPrime)
    std::cout << "Prime\n";
  else
    std::cout << "Not prime\n";
  
  return 0;
}

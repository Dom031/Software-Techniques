#include <iostream>
#include <cctype>

int main(){
  char ch;

  std::cout << " Enter a character: ";
  std::cin >> ch;

  if (std::isdigit(ch)){
    //isdigit checks if ch is a decimal digit (number 0-9)
    std::cout << ch << " is a digit" << std::endl;
  } else if (std::isalpha(ch)) {
    //isalpha checks if ch is an alphabetic letter
    switch(std::tolower(ch)) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      std::cout<< ch << " is a vowel" << std::endl;
      break;
    default:
      std::cout << ch << " is a consonant" << std::endl;
      break;
    }
  } else if (std::ispunct(ch)) {
    std::cout << ch << " is a punctuation" <<std::endl;
  } else {
    std::cout << ch << " is unrecognized" << std::endl;
  }


  return 0;
}

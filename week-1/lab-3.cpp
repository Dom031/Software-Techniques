#include <iostream>

int main(int argc, char* argv[]){

  std::cout << "Program name" << argv[0] << std::endl;
  std::cout << "Called with " << argc-1 << " arguments" << std::endl;

  for (int i = 1; i < argc; i++){
      std::cout << "'" << argv[i] << "'" << std::endl; 
    }

  std::cout << std::endl;

  return 0;
}

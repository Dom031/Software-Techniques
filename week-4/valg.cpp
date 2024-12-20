//In a new program, use new to request space to store an array of three integers and store the
//resulting pointer in a pointer to integer variable. Store three values in the array. Then, using a
//loop, print out the three values. Do not return the memory to the free store.
//Compile your program and run it. Now run your program using valgrind, compare the output
//when using:
//• valgrind
//• valgrind –leak-check=full
//Now compile with debug information and re-run the program in valgrind (with and without the
//leak-check=full option). What is the difference?
//Add the code to release the memory to the free-store. Recompile the program and run it in
//valgrind again observing the difference in the output


#include <iostream>

int main(){
  
  int *ptrArr = new int[3];

  ptrArr[0] = 10;
  ptrArr[1] = 20;
  ptrArr[2] = 30;

  for (int i = 0; i<3; i++){
    std::cout << *(ptrArr + i);
    }

  delete[] ptrArr;





  return 0;
}

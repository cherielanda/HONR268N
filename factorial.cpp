//cherie landa attempts to code in c++. here goes
#include <isostream>


int factorial(int total){
  int result =1; 
  for (int number = 1; number <= total; number=number+1 ){
    result = result*number;} 
}


int main() {
  int total =1;
  for (int number = 0; number <=10; number=number+1 ){
    printf( factorial (number));
}
  printf(total); //print this
  return 0; //end the code
}



#include <stdio.h> 
int globalNum;
int main () {
  int num1, num2;
  num1 = 10;
  num2 = 20;
  globalNum = num1 + num2;
  printf ("value of num1 = %d, num2 = %d and globalNum = %d\n", num1, num2, globalNum);
  return 0;
}
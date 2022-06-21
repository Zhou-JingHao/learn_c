#include <stdio.h>

int main()
{
  float num;
  float result;
  
  printf("Number: ");
  scanf("%f", &num);
  
  result = num * 1.2;
  printf("Result: %f", result);
}
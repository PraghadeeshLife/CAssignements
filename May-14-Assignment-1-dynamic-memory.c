// Program to allocate memory dynamically

#include <stdio.h>



int main(void) {
  int* int_pointer = (int*)malloc(sizeof(int));
  char* char_pointer = (char*)malloc(sizeof(char));
  float* float_pointer = (float*)malloc(sizeof(float));

  *int_pointer = 1;
  *char_pointer = 'A';
  *float_pointer = 5.0;
  
  printf("%c \n", *char_pointer);
  printf("%d \n", *int_pointer);
  printf("%f \n", *float_pointer);
  return 0;
}

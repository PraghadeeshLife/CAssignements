// Program to Reverse the String using Pointer Arithmetic

#include <stdio.h>

int strlen(char* some_string){
  int count = 0;
  while(some_string[count] != '\0'){
    count++;
  }
  return count;
}

char* strrev(char* another_string){
  int the_lenght = strlen(another_string);
  char* new_string = (char*) malloc(the_lenght*sizeof(char));
  int another_count = 0;
  int another_length = the_lenght-1;
  while(another_string[another_count] != '\0'){
    new_string[another_length] = another_string[another_count];
    another_length--;
    another_count++;
  }
  
  return new_string;
}

int main(void) {
  printf("The reversed string is %s \n", strrev("Praghadeesh"));
  return 0;
}
